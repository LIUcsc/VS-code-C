#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <graphics.h>//easyxͼ�ο�ͷ�ļ�
#include "tools.h"

#define WIN_WIDTH 900 //ҳ���
#define WIN_HEIGHT 600 //ҳ���
//#define IMGARR_MAX 100

//ֲ������
enum { WAN_DOU, XIANG_RI_KUI, SHI_REN_HUA, ZHI_WU_IMGARR_MAX };

//��ʼ������
void gameInit();

//���´���
void updateWindow();
//�û����
void userClick();

//�ж��ļ��Ƿ�򿪳ɹ�����
int fileExist(const char* name);

//�ı�ֲ��״̬ ����
void updateGame();

//�����˵�
void startUI();