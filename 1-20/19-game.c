/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> */

// 三子棋游戏源文件
#include "19-game.h"

// 实现初始化棋盘函数
void IntBoard(char board[ROW][COL], int row, int col)
{
    int x, y, z;
    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
        {
            board[x][y] = ' ';
        }
    }
}

// 实现显示棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int x, y;
    printf("\n");
    for (x = 0; x < row; x++)
    {
        // 打印内容
        for (y = 0; y < col; y++)
        {
            printf(" %c ", board[x][y]);
            if (y < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        // 打印换行分割线
        if (x < row - 1)
        {
            for (y = 0; y < col; y++)
            {
                printf("---");
                if (y < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

// 实现玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col, int *PlayerFrequency)
{
    int x, y;
    while (1)
    {
        printf("输入坐标x轴y轴,空格分开\n");
        printf("你要下的位置是>>");
        scanf("%d%d", &x, &y);

        if (x >= 1 && x <= row && y >= 1 && y <= col) //输入的数不能小于0，大于3
        {
            if (board[x - 1][y - 1] == ' ') // 棋盘为空才能下
            {
                board[x - 1][y - 1] = '*';
                *PlayerFrequency++;
                break;
            }
            else
            {
                printf("这个位置下过了\n");
            }
        }
        else
        {
            printf("输入坐标错误\n");
        }
    }
}
// 实现电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col, int *ComputerFrequency)
{
    int frequency = 0; // 下棋 次数
    int x, y;
    srand((unsigned int)time(NULL)); // time 获取时间戳，强制类型转换为无符号整型，头文件为 time.h

    // printf("电脑下的位置：%d\n", Rand);

    while (1)
    {
        x = rand() % row;       // 生成随机数 0-2
        y = rand() % col;       // 生成随机数 0-2
        if (board[x][y] == ' ') // 棋盘为空才能下
        {
            board[x][y] = '#'; // 电脑下棋
            *ComputerFrequency++;
            break;
        }
    }
}

// 实现判断谁赢函数
char WhoWins(char board[ROW][COL], int row, int col)
{
    //  1.玩家赢
    //  2.电脑赢
    //  3.继续
    //  0.平局
    int i;
    char ifDraw;
    for (i = 0; i < row; i++)
    {
        // 判断行
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
        // 判断列
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
        // 判断斜线
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
        {
            return board[1][1];
        }
        else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
        {
            return board[1][1];
        }
    }
    ifDraw = if_draw(board, row, col); // 判断是否平局
    return ifDraw;
}

// 判断是否平局函数
char if_draw(char board[ROW][COL], int row, int col)
{
    int x, y;
    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
        {
            if (board[x][y] == ' ')
            {
                return '1'; // 有空格继续游戏
            }
        }
    }
    return '0'; // 没有空格为平局
}
