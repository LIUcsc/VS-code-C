//          三子棋游戏测试文件
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h> */
#include "19-game.c"
// #include "19-game.h"

void menu()
{
    printf("|---------------------------------------------------------|\n");
    printf("|**********************三子棋游戏*************************|\n");
    printf("|*********************************************************|\n");
    printf("|**********   1.开始   *********   0.退出   **************|\n");
    printf("|*********************************************************|\n");
    printf("|---------------------------------------------------------|\n");
}
void game()
{
    char board[ROW][COL] = {0};      // 定义棋盘
    int PlayerFrequency = 0;         // 我下了几次
    int ComputerFrequency = 0;       // 电脑下了几次
    char isWhoWins;                  // 接收返回值 判断谁赢了'*'.玩家赢 '#'.电脑赢 '1'.继续 '0'.平局
    srand((unsigned int)time(NULL)); // 生成随机数种子，用于电脑下棋， time 获取时间戳，强制类型转换为无符号整型，头文件为 time.h
    IntBoard(board, ROW, COL);       // 初始化棋盘
    DisplayBoard(board, ROW, COL);   // 展示棋盘
    while (1)
    {

        PlayerMove(board, ROW, COL, &PlayerFrequency); // 玩家下棋
        DisplayBoard(board, ROW, COL);                 // 展示棋盘
        isWhoWins = WhoWins(board, ROW, COL);          // 判断谁赢了*.玩家赢 #.电脑赢 1.继续 0.平局
        if (isWhoWins != '1')                          // 不为'1'就跳出循环，
        {
            break;
        }
        ComputerMove(board, ROW, COL, &ComputerFrequency); // 电脑下棋
        DisplayBoard(board, ROW, COL);                     // 展示棋盘
        isWhoWins = WhoWins(board, ROW, COL);              // 判断谁赢了判断谁赢了  *.玩家赢 #.电脑赢 1.继续 0.平局
        if (isWhoWins != '1')                              // 不为'1'就跳出循环，
        {
            break;
        }
    }
    if (isWhoWins == '*')
    {
        printf("你赢了\n");
    }
    else if (isWhoWins == '#')
    {
        printf("人机赢了\n");
    }
    else
    {
        printf("平局\n");
    }
}
void test()
{
    int input;
    do
    {
        menu();
        printf("请选择>>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("游戏开始\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");

            break;
        default:
            printf("输入错误\n");

            break;
        }
    } while (input);
}
int main()
{

    test();
    system("pause");
    return 0;
}