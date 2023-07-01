#include "21-18_game.h"

// 实现初始化棋盘函数
void InitializeCheckerboard(char board[ROWS][COLS], int rows, int cols, char display)
{
    int x, y, z = 0;
    for (x = 0; x < rows; x++)
    {
        for (y = 0; y < cols; y++)
        {
            board[x][y] = display;
        }
    }
}

// 布置雷
void InitializeLandmine(char landmine[ROWS][COLS], int row, int col, int uantity)
{
    int x, y;
    // 放置雷
    while (uantity)
    {

        x = rand() % row + 1;
        y = rand() % col + 1;
        if (landmine[x][y] == '0')
        {
            landmine[x][y] = '*';
            uantity--;
        }
    }
}
// 实现显示棋盘函数
void DisplayCheckerboard(char board[ROWS][COLS], int row, int col)
{
    int x = 1, y = 1;
    int numY = 1, numX = 1;
    printf("\n");
    // printf("\n");
    // printf("                       ");
    printf("  ");
    for (y = 1; y <= col; y++)
    {
        printf("  %d ", y); // 打印行号
    }
    printf("\n");
    for (x = 1; x <= row; x++)
    {
        // if (x == 1)
        // {
        //     printf("                       ");
        //     for (y = 1; y <= col; y++)
        //     {
        //         printf("  %d ", y);
        //     }
        //     printf("\n");
        // }
        for (y = 1; y <= col; y++)
        {
            if (y == 1)
            {
                // printf("                       ");
                printf("  ");
            }
            printf("|---");
        }
        printf("|");
        printf("\n");
        // printf("                     %2d", x); // 打印列号
        printf("%2d", x); // 打印列号
        for (y = 1; y <= col; y++)
        {
            // if (y == 1)
            // {
            //     printf("                     %2d", numY++);
            // }
            printf("|");
            printf(" %c ", board[x][y]);
        }
        printf("|");
        printf("\n");
    }
    // printf("                       ");
    printf("  ");
    for (y = 1; y <= col; y++)
    {
        printf("|---");
    }
    printf("|");
    printf("\n");
    printf("\n");
}

// 判断雷
int sweep(char landmine[ROWS][COLS], char board[ROWS][COLS], int x, int y, int wan)
{
    int l = 0;
    int a, b;

    if (landmine[x][y] == '*')
    {
        return 0;
    }
    // *wan++;
    for (a = x - 1; a <= x + 1; a++)
    {
        for (b = y - 1; b <= y + 1; b++)
        {
            if (landmine[a][b] == '*')
            {
                l++;
            }
        }
        
    }
    // for (a = x - 1; a <= x + 1; a++)
    // {
    //     for (b = y - 1; b <= y + 1; b++)
    //     {

    //         l += landmine[a][b];
    //     }
    // }
    if (wan == ROW * COL - UANTITY)
    {
        return 1;
    }
    // if (l == 0)
    // {
    //     for (a = x - 1; a <= x + 1; a++)
    //     {
    //         for (b = y - 1; b <= y + 1; b++)
    //         {
    //             if (board[a][b] == '?')
    //             {
    //                 board[a][b] = '0';
    //             }
    //         }
    //     }
    // }
    // else
    // {
    //     board[x][y] = l + '0';
    //     l = 0;
    //}
    // printf("l=%d\n", l);
    board[x][y] = l + '0';
    // board[x][y] = l - 8 * '0';

    return 2;
}