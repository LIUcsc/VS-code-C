#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <graphics.h>//easyx图形库头文件
#include "tools.h"

#define WIN_WIDTH 900 //页面宽
#define WIN_HEIGHT 600 //页面高
//#define IMGARR_MAX 100

//植物数量
enum { WAN_DOU, XIANG_RI_KUI, SHI_REN_HUA, ZHI_WU_IMGARR_MAX };

//初始化数据
void gameInit();

//更新窗口
void updateWindow();
//用户点击
void userClick();

//判断文件是否打开成功函数
int fileExist(const char* name);

//改变植物状态 动画
void updateGame();

//启动菜单
void startUI();