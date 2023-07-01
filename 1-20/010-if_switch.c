#include <stdio.h>
#include <stdlib.h>
/*
分支语句:选择结构
if
switch
*/
int main()
{
    int a = 100;
    int i;
    int dey;
    // printf("判断一个数是否为奇数:");
    // scanf("%d", &a);
    /*  for (int b=0;b<=a;b++)
     {
         if (b % 2 == 1)
         {
             printf("奇数：%d\n", b);
         }
     } */
    /* while (i <= 100)
    {
        if (i % 2 == 1)
        {
            printf("奇数：%d\n", i);
        }
        i++;
    } */
    scanf("%d", &dey);
    /* switch (dey)
    {
    case 1:

        printf("星期1");
        break;

    case 2:

        printf("星期2");
        break;

    case 3:

        printf("星期3");
        break;

    case 4:

        printf("星期4");
        break;

    case 5:

        printf("星期5");
        break;

    case 6:

        printf("星期6");
        break;

    case 7:

        printf("星期7");
        break;
    default:
        printf("输入错误");
    } */
    switch (dey)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("工作日");
        break;
    case 7:
    case 6:
        printf("休息日");
        break;
    default:
        printf("输入错误");
        break;
    }

    system("pause");
    return 0;
}