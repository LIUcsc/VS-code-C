#include "PlantsVsZombies.h"

IMAGE imgBg;//��ʾͼƬ����
IMAGE imgBar;//ֲ����
IMAGE imgCardsArr[ZHI_WU_IMGARR_MAX];//ֲ�￨������
IMAGE* imgZhiWu[ZHI_WU_IMGARR_MAX][20];//ÿ��ֲ���״̬

int curX, curY;//��ǰѡ��ֲ����ƶ������е�����ϵ
int curZhiWu;//��ǰѡ�е�ֲ��,û��ѡ��Ϊ -1

struct zhiwu {
	int type; //�Ƿ���ֲ��   -1��ʾ��
	int frameIndex;//��ǰ���ŵ��˵ڼ�֡
};
struct zhiwu map[3][9];

//�ж��ļ��Ƿ�򿪳ɹ�����
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

//��ʼ������
void gameInit() {
	//��ʼ��ͼƬ����
	loadimage(&imgBg, "res/bg.jpg");
	//��ʼ��ֲ����
	loadimage(&imgBar, "res/bar5.png");
	//��ʽ��ֲ��״̬����
	memset(imgZhiWu, 0, sizeof(imgZhiWu));
	//��ʽ����ͼ
	memset(map, 0, sizeof(map));
	//��ʼ��ֲ��
	char name[64];
	for (int i = 0; i < ZHI_WU_IMGARR_MAX; i++) {
		//��ʼ��ֲ�￨��
		sprintf_s(name, sizeof(name), "res/Cards/card_%d.png", i + 1);
		loadimage(&imgCardsArr[i], name);

		//��ʼ��ֲ��״̬ͼƬ
		for (int x = 0; x < 20; x++) {
			sprintf_s(name, sizeof(name), "res/zhiwu/%d/%d.png", i, x + 1);
			//�ж�����ļ��Ƿ���ڣ��ܴ򿪾��Ǵ���
			if (fileExist(name) == 1) {
				imgZhiWu[i][x] = new IMAGE; //�����ڴ�
				loadimage(imgZhiWu[i][x], name);//�������ͼƬ
			}
			else {
				break;
			}

		}
	}

	//��ʼ����ǰѡ�е�ֲ��
	curZhiWu = -1;

	//������Ϸ��ͼ�δ���
	initgraph(WIN_WIDTH, WIN_HEIGHT/*, 1*/);
}

//��Ⱦ����
void updateWindow() {
	BeginBatchDraw();//��ʼ˫����

	//��ȾͼƬ����������
	putimage(0, 0, &imgBg);

	//��Ⱦֲ����������
	putimagePNG(250, 0, &imgBar);

	//��Ⱦֲ�￨�Ƶ�����
	for (int i = 0; i < ZHI_WU_IMGARR_MAX; i++) {
		int x = 338 + i * 64;
		int y = 6;
		putimagePNG(x, y, &imgCardsArr[i]);
	}



	//��ֲֲ��
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 9; n++) {
			//�ж��Ƿ���ֲ����Ҫ��Ⱦ
			if (map[i][n].type > 0) {
				//�������ǰֲ����ֲ����
				int x = 256 + n * 81;
				int y = 179 + i * 102;
				//�Ǹ�ֲ����Ҫ��Ⱦ
				int zhiWuType = map[i][n].type - 1;
				//��Ⱦ�ڼ�֡
				int index = map[i][n].frameIndex;
				//��Ⱦ���ֲ��
				putimagePNG(x, y, imgZhiWu[zhiWuType][index]);
			}
		}
	}

	//��Ⱦ�϶������е�ֲ��
	if (curZhiWu >= 0) {
		IMAGE* img = imgZhiWu[curZhiWu][0];
		putimagePNG(curX - img->getwidth() / 2, curY - img->getheight() / 2, img);
	}

	EndBatchDraw();//����˫����
}

//�û��������
void userClick() {
	ExMessage msg;


	static int status = 0;//��ǰ����״̬��1���  0�ɿ�

	if (peekmessage(&msg)) {
		if (msg.message == WM_LBUTTONDOWN) {//���������
			//�жϵ����λ���Ƿ�Ϊֲ�￨��
			if ((msg.x > 338 && msg.x < 338 + 64 * ZHI_WU_IMGARR_MAX) && (msg.y > 6 && msg.y < 96)) {
				int index = (msg.x - 338) / 64; //�������ǰ��������Ǹ�ͼƬ
				//printf("index = %d\n", index);
				curZhiWu = index;//���õ�ǰѡ�е����ĸ�ֲ��
				status = 1;//���
				//����ֲ����ʾ����
				curX = msg.x;
				curY = msg.y;
			}
		}
		else if (msg.message == WM_MOUSEMOVE && status == 1) {//����ƶ�
			//ֲ����ʾ����
			curX = msg.x;
			curY = msg.y;
		}
		else if (msg.message == WM_LBUTTONUP) {//������̧��

			//���ƿ���ֲֲ�������
			if ((msg.x > 256 && msg.x < 990) && (msg.y > 179 && msg.y < 490)) {
				//�������ǰѡ����ǵڼ��У��ڼ���
				int row = (msg.y - 179) / 102.0;
				int col = (msg.x - 256) / 81.0;
				if (map[row][col].type == 0) {
					map[row][col].type = curZhiWu + 1;//����Ϊ����ֲ����ֲ
					map[row][col].frameIndex = 0;//���õ�ǰ��ʾ֡��
				}
			}


			status = 0;//�ɿ�
			curZhiWu = -1;//�ɿ�����ѡ��ֲ��ȡ��
		}
	}

}

//�ı�ֲ��״̬ ����
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