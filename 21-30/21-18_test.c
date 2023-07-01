#include "21-18_game.c"
/*                             扫雷游戏                          */
void menu()
{
    printf("|---------------------------------------------------------|\n");
    printf("|***********************扫雷游戏**************************|\n");
    printf("|*********************************************************|\n");
    printf("|**********   1.开始   *********   0.退出   **************|\n");
    printf("|*********************************************************|\n");
    printf("|---------------------------------------------------------|\n");
}
void game()
{
    char board[ROWS][COLS] = {0};    // 定义棋盘
    char landmine[ROWS][COLS] = {0}; // 定义地雷
    int x, y, sw;
    int wan = 0;                                       // 统计我下了多少次，用来判断我赢了吗
    InitializeCheckerboard(board, ROWS, COLS, ' ');    // 初始化棋盘
    InitializeCheckerboard(landmine, ROWS, COLS, '0'); // 初始化放雷的棋盘
    InitializeLandmine(landmine, ROW, COL, UANTITY);   // 布置雷函数

    while (1)
    {
        // DisplayCheckerboard(landmine, ROW, COL);
        DisplayCheckerboard(board, ROW, COL); // 显示棋盘
        printf("你要下的位置是>>");
        scanf("%d %d", &x, &y);
        if (x > 0 && x <= ROW && y > 0 && y <= COL)
        {
            sw = sweep(landmine, board, x, y, wan); // 返回 0.你输了  1.你赢了  2.继续
            wan += 1;
            if (sw != 2)
            {
                break;
            }
        }
        else
        {
            printf("坐标错误请重新输入");
        }
    }
    if (sw)
    {
        printf("*************你赢了*************\n");
        DisplayCheckerboard(landmine, ROW, COL);
    }
    else
    {
        printf("*************你输了**************\n");
        DisplayCheckerboard(landmine, ROW, COL);
    }
}

void test()
{
    int input;
    do
    {
        menu();
        printf("请输入>>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
        {
            printf("开始游戏\n");
            game();
            break;
        }
        case 0:
        {
            printf("退出游戏\n");
            break;
        }
        default:
            printf("输入错误\n");
            break;
        }
    } while (input);
}

int main()
{

    test();
    // game();
    // int x;
    srand((unsigned int)time(NULL)); // time 获取时间戳，强制类型转换为无符号整型，头文件为 time.h
    // x = rand();
    // printf("%d\n", x % 3);
    // printf("%d\n", x);
    // printf("%d\n", x);
    system("pause");
    return 0;
}