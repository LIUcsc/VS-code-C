/*
    循环语句
while
for
do While
int main(){
    system("pause");
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>


void menu()
{
    printf("|---------------------------------------------------------|\n");
    printf("|**********************猜数字游戏*************************|\n");
    printf("|*********************************************************|\n");
    printf("|**********   1.开始   *********   2.退出   **************|\n");
    printf("|*********************************************************|\n");
    printf("|---------------------------------------------------------|\n");
}
// RAND_MAX-32767
int game(int x)
{
    int Rand;
    // srand(rand());
    // srand((unsigned int) time(NULL));//time 获取时间戳，强制类型转换为无符号整型，头文件为 time.h
    Rand = rand() % 100 + 1; // 生成随机数
    int num;
    // printf("*****************游戏开始*****************\n");
    printf("*********************  游戏开始  *************************\n");
    // printf("你有%d次机会\n", x);
    while (1)
    {
        if (x == 0)
        {
            printf("                                                          \n");
            printf("                                                          \n");
            printf("|--------------------------------------------------------| \n");
            printf("|**********************  失败  **************************|\n");
            printf("|********************  游戏结束  ************************|\n");
            printf("|--------------------------------------------------------|\n");
            printf("                                                          \n");
            printf("                                                          \n");
            break;
        }
        // printf("你还有%d次机会\n", x);
        printf("请输入你猜的数(1-100):");
        scanf("%d", &num);

        if (num > Rand)
        {

            // printf("猜大了%d\n", num);
            printf("猜大了\n");
            x--;
            if (x)
            {
                printf("你还有%d次机会\n", x);
            }
            // printf("你还有%d次机会\n", x);
            //  printf("请输入你猜的数：");
            //  scanf("%d", &num);
            continue;
        }
        else if (num < Rand)
        {

            // printf("猜小了%d\n", num);
            printf("猜小了\n");
            x--;
            if (x)
            {
                printf("你还有%d次机会\n", x);
            }
            // printf("你还有%d次机会\n", x);
            // printf("请输入你猜的数：");
            // scanf("%d", &num);
            continue;
        }
        else
        {
            printf("猜对了:%d\n", num);
            printf("                                                          \n");
            printf("                                                          \n");
            printf("|--------------------------------------------------------| \n");
            printf("|**********************  成功  **************************|\n");
            printf("|********************  游戏结束  ************************|\n");
            printf("|--------------------------------------------------------| \n");
            printf("                                                          \n");
            printf("                                                          \n");
            break;
        }
    }
}

int main()
{
    int input;
    int x = 5;

    srand((unsigned int)time(NULL)); // time 获取时间戳，强制类型转换为无符号整型，头文件为 time.h
    do
    {
        menu();
        printf("请选择:");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
        {
            printf("|---------------------------------------------------------|\n");
            printf("|*********************  选择难度  ************************|\n");
            printf("|*********************************************************|\n");
            printf("|********** 1.简单 **** 2.困难 ****  3.地狱  *************|\n");
            printf("|*********************************************************|\n");
            printf("|---------------------------------------------------------|\n");
            printf("请选择:");
            scanf("%d", &x);
            switch (x)
            {
            case 1:
                x = 20;
                game(x);
                break;
            case 2:
                x = 10;
                game(x);
                break;
            case 3:
                x = 5;
                game(x);
                break;
            default:
                printf("输入错误\n");
                break;
            }

            break;
        }
        case 2:
        {
            printf("退出游戏\n");
            input = 0;
            break;
        }
        default:
        {
            printf("输入错误\n");
            break;
        }
        }
    } while (input);

    system("pause");
    return 0;
}

/* int main()
{
    int Rand = 7;
    int num;
    int go;
    int x = 5;
    printf("*****************猜数字游戏*****************\n");
    // printf("开始游戏请按|1\n");
    printf("开始游戏请按|1  退出游戏请按|2:");
    scanf("%d", &go);
    printf("*****************游戏开始*****************\n");
    printf("你有5次机会\n");
    if (go == 1)
    {

        while (1)
        {

            printf("请输入你猜的数(1-10):");
            scanf("%d", &num);
            if (num > Rand)
            {

                printf("猜大了%d\n", num);
                x--;
                if (x == 0)
                {
                    printf("*************游戏结束***************\n");
                    printf("你没有机会了\n");
                    printf("继续游戏请按|1\n");
                    printf("退出游戏请按|2\n");
                    scanf("%d", &go);
                    if (go == 1)
                    {
                        x = 5;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                printf("你还有%d次机会\n", x);
                // printf("请输入你猜的数：");
                // scanf("%d", &num);
                continue;
            }
            else if (num < Rand)
            {

                printf("猜小了%d\n", num);
                x--;
                if (x == 0)
                {
                    printf("*************游戏结束***************\n");
                    printf("你没有机会了\n");
                    printf("继续游戏请按|1\n");
                    printf("退出游戏请按|2\n");
                    scanf("%d", &go);
                    if (go == 1)
                    {
                        x = 5;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                printf("你还有%d次机会\n", x);
                // printf("请输入你猜的数：");
                // scanf("%d", &num);
                continue;
            }
            else
            {
                printf("猜对了:%d\n", num);
                printf("*************游戏结束***************\n");
                printf("继续游戏请按|1\n");
                printf("退出游戏请按|2\n");
                scanf("%d", &go);
                if (go == 1)
                {
                    x = 5;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
    }

    system("pause");
    return 0;
} */

/* int main()
{
    // 2分查找一个有序数组里面的某个数
    int a = 8;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int r = sz - 1;
    int man = (left + r) / 2;
    while (left < r)
    {
        man = (left + r) / 2;
        if (a < arr[man])
        {
            r = man - 1;
        }
        else if (a > arr[man])
        {
            left = man + 1;
        }
        else
        {
           printf("找到了下标为：%d\n",man);
           break;
        }
    }
    if(left>=r){
        printf("没有找到");
    }
    system("pause");
    return 0;
} */

/* int main()
{
    // 求最大值
    int arr[] = {-10, -80, -3, -56, -78, -6, -12, -98, -33, -10};
    int max = arr[0];
    int i = 0, y;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max=%d\n", max);
    system("pause");
    return 0;
} */

/* int main()
{
    // 乘法口诀表
    int x, y;
    int sum;
    for (x = 1; x <= 9; x++)
    {
        y = 1;
        for (y = 1; y <= x; y++)
        {
            sum = x * y;
            printf(" | %d*%d=%-2d | ", y, x, sum);  // %2d 打印两位数字，不够两位用空格补齐，右对齐   %-2d左对齐
            // if (x == y)
            // {
            //     printf("\n");
            // }
        }
        printf("\n");
    }

    system("pause");
    return 0;
} */
/* int main()
{
    // 计算 (1/1)-(1/2)+(1/3)-(1/4)..........+(1/99)-(1/100)

    double sum;
    int i;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        // sum += 1.0/i;
        if (i % 2 == 1)
        {
            sum += 1.0 / i;
        }
        if (i % 2 == 0)
        {
            sum -= 1.0 / i;
        }
        // sum+= flag*1.0/i;
        // flag = -flag;
    }
    printf("%lf\n", sum);
    system("pause");
    return 0;
} */
/* int main(){
    // 计算1-100有多少个9
    int i,x=0;
    for(i=8;i<=100;i++){

        if(i/10 == 9){
            x++;
        }
        if(i%10 == 9){
            x++;
        }
    }
    printf("%d\n",x);
    system("pause");
    return 0;
} */