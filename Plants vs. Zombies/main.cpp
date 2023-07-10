/*
Plants vs. Zombies
	开发日志
	1.创建项目
	2.导入素材
	3.实现开始游戏界面
	4.实现游戏顶部工具栏
	5.实现工具栏中的植物卡牌
	6.
	7.

*/

#include "PlantsVsZombies.h"


int main() {
	//初始化数据
	gameInit();

	int timer = 0;
	bool flag = false;
	//startUI();
	while (1) {
		//用户点击处理
		userClick();

		timer += getDelay();
		if (timer > 50) {
			flag = true;
			timer = 0;
		}
		if (flag) {
			flag = false;
			//渲染窗口
			updateWindow();
			//改变植物状态
			updateGame();
		}
		//延时
		//Sleep(10);
	}


	system("pause");
	return 0;
}

