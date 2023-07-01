#include <stdio.h>
#include <stdlib.h>
// 二级指针
int main()
{
    // int a = 10;
    // int *pa = &a;
    // int **ppa = &pa;
    // **ppa = 20;
    // printf(" **ppa = %d\n", **ppa);
    // printf(" a = %d\n", a);

    /*
    指针数组 -- 数组 -- 存放指针的数组

    数组指针 -- 指针 --
    */
    int a = 10;
    int b = 20;
    int c = 30;
    int i = 0;
    int *arr[3] = {&a, &b, &c}; // 指针数组
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", *(arr[i]));
    }

    system("pause");
    return 0;
}