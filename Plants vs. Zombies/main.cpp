/*
Plants vs. Zombies
	������־
	1.������Ŀ
	2.�����ز�
	3.ʵ�ֿ�ʼ��Ϸ����
	4.ʵ����Ϸ����������
	5.ʵ�ֹ������е�ֲ�￨��
	6.
	7.

*/

#include "PlantsVsZombies.h"


int main() {
	//��ʼ������
	gameInit();

	int timer = 0;
	bool flag = false;
	//startUI();
	while (1) {
		//�û��������
		userClick();

		timer += getDelay();
		if (timer > 50) {
			flag = true;
			timer = 0;
		}
		if (flag) {
			flag = false;
			//��Ⱦ����
			updateWindow();
			//�ı�ֲ��״̬
			updateGame();
		}
		//��ʱ
		//Sleep(10);
	}


	system("pause");
	return 0;
}

