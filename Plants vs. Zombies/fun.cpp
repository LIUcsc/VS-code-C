#include "PlantsVsZombies.h"

IMAGE imgBg;//表示图片背景
IMAGE imgBar;//植物栏
IMAGE imgCardsArr[ZHI_WU_IMGARR_MAX];//植物卡牌数组
IMAGE* imgZhiWu[ZHI_WU_IMGARR_MAX][20];//每种植物的状态

int curX, curY;//当前选中植物，在移动过程中的坐标系
int curZhiWu;//当前选中的植物,没有选中为 -1

struct zhiwu {
	int type; //是否有植物   -1表示无
	int frameIndex;//当前播放到了第几帧
};
struct zhiwu map[3][9];

//判断文件是否打开成功函数
int fileExist(const char* name) {
	FILE* pf = fopen(name, "r");
	if (pf == NULL) {
		return 0;
	}
	else {
		fclose(pf);
		pf = NULL;
		return 1;
	}
}

//初始化数据
void gameInit() {
	//初始化图片背景
	loadimage(&imgBg, "res/bg.jpg");
	//初始化植物栏
	loadimage(&imgBar, "res/bar5.png");
	//格式化植物状态数组
	memset(imgZhiWu, 0, sizeof(imgZhiWu));
	//格式化地图
	memset(map, 0, sizeof(map));
	//初始化植物
	char name[64];
	for (int i = 0; i < ZHI_WU_IMGARR_MAX; i++) {
		//初始化植物卡牌
		sprintf_s(name, sizeof(name), "res/Cards/card_%d.png", i + 1);
		loadimage(&imgCardsArr[i], name);

		//初始化植物状态图片
		for (int x = 0; x < 20; x++) {
			sprintf_s(name, sizeof(name), "res/zhiwu/%d/%d.png", i, x + 1);
			//判断这个文件是否存在，能打开就是存在
			if (fileExist(name) == 1) {
				imgZhiWu[i][x] = new IMAGE; //分派内存
				loadimage(imgZhiWu[i][x], name);//保存这个图片
			}
			else {
				break;
			}

		}
	}

	//初始化当前选中的植物
	curZhiWu = -1;

	//创建游戏的图形窗口
	initgraph(WIN_WIDTH, WIN_HEIGHT/*, 1*/);
}

//渲染窗口
void updateWindow() {
	BeginBatchDraw();//开始双缓冲

	//渲染图片背景到窗口
	putimage(0, 0, &imgBg);

	//渲染植物栏到窗口
	putimagePNG(250, 0, &imgBar);

	//渲染植物卡牌到窗口
	for (int i = 0; i < ZHI_WU_IMGARR_MAX; i++) {
		int x = 338 + i * 64;
		int y = 6;
		putimagePNG(x, y, &imgCardsArr[i]);
	}



	//种植植物
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 9; n++) {
			//判断是否有植物需要渲染
			if (map[i][n].type > 0) {
				//计算出当前植物种植坐标
				int x = 256 + n * 81;
				int y = 179 + i * 102;
				//那个植物需要渲染
				int zhiWuType = map[i][n].type - 1;
				//渲染第几帧
				int index = map[i][n].frameIndex;
				//渲染这个植物
				putimagePNG(x, y, imgZhiWu[zhiWuType][index]);
			}
		}
	}

	//渲染拖动过程中的植物
	if (curZhiWu >= 0) {
		IMAGE* img = imgZhiWu[curZhiWu][0];
		putimagePNG(curX - img->getwidth() / 2, curY - img->getheight() / 2, img);
	}

	EndBatchDraw();//结束双缓冲
}

//用户点击处理
void userClick() {
	ExMessage msg;


	static int status = 0;//当前鼠标的状态，1点击  0松开

	if (peekmessage(&msg)) {
		if (msg.message == WM_LBUTTONDOWN) {//鼠标左键点击
			//判断点击的位置是否为植物卡牌
			if ((msg.x > 338 && msg.x < 338 + 64 * ZHI_WU_IMGARR_MAX) && (msg.y > 6 && msg.y < 96)) {
				int index = (msg.x - 338) / 64; //计算出当前点击的是那个图片
				//printf("index = %d\n", index);
				curZhiWu = index;//设置当前选中的是哪个植物
				status = 1;//点击
				//更新植物显示坐标
				curX = msg.x;
				curY = msg.y;
			}
		}
		else if (msg.message == WM_MOUSEMOVE && status == 1) {//鼠标移动
			//植物显示坐标
			curX = msg.x;
			curY = msg.y;
		}
		else if (msg.message == WM_LBUTTONUP) {//鼠标左键抬起

			//控制可种植植物的区域
			if ((msg.x > 256 && msg.x < 990) && (msg.y > 179 && msg.y < 490)) {
				//计算出当前选择的是第几行，第几列
				int row = (msg.y - 179) / 102.0;
				int col = (msg.x - 256) / 81.0;
				if (map[row][col].type == 0) {
					map[row][col].type = curZhiWu + 1;//设置为已有植物种植
					map[row][col].frameIndex = 0;//设置当前显示帧数
				}
			}


			status = 0;//松开
			curZhiWu = -1;//松开鼠标后将选中植物取消
		}
	}

}

//改变植物状态 动画
void updateGame() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			if (map[i][j].type != 0) {
				map[i][j].frameIndex++;
				int zhiWuType = map[i][j].type - 1;
				int index = map[i][j].frameIndex;
				if (imgZhiWu[zhiWuType][index] == NULL) {
					map[i][j].frameIndex = 0;
				}
			}
		}
	}
}


void startUI() {
	IMAGE imgMenu, imgMenu1, imgMenu2;
	loadimage(&imgMenu, "res/menu.png");
	loadimage(&imgMenu1, "res/menu1.png");
	loadimage(&imgMenu2, "res/menu2.png");
	while (1) {
		putimage(0, 0, &imgMenu);
		putimagePNG(480, 115, &imgMenu2);
		putimagePNG(480, 115, &imgMenu1);
	}
}