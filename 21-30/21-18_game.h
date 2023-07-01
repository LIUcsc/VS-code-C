#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10        // 显示区域
#define COL 10       // 显示区域
#define UANTITY 15   // 放多少个雷
#define ROWS ROW + 2 // 实际区域
#define COLS COL + 2 // 实际区域

// 声明初始化棋盘函数
void InitializeCheckerboard(char board[ROWS][COLS], int rows, int cols, char display);
// 声明初始化地雷函数
void InitializeLandmine(char landmine[ROWS][COLS], int rows, int cols, int uantity);

// 声明显示棋盘函数
void DisplayCheckerboard(char board[ROWS][COLS], int row, int col);
// 排雷
int sweep(char landmine[ROWS][COLS], char board[ROWS][COLS], int x, int y, int wan);