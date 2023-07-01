// 三子棋游戏头文件
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <time.h>
#define ROW 3
#define COL 3

// 声明初始化棋盘函数
void IntBoard(char board[ROW][COL], int row, int col);

// 声明显示棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

// 声明玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col, int *PlayerFrequency);

// 声明电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col, int *ComputerFrequency);

// 声明判断谁赢了函数
char WhoWins(char board[ROW][COL], int row, int col);

// 声明判断是否平局
char if_draw(char board[ROW][COL], int row, int col);