#include <stdio.h>
#include <stdlib.h>

#define N_VALUES 5

int mystrlen(char *ch)
{
    char *start = ch;
    char *end = ch;
    while (*end != '\0')
    {
        end++;
    }

    return end - start;
}

// 野指针
//  概念：野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
int main()
{

    // float values[N_VALUES];
    // float *vp;
    // for (vp = &values[0]; vp < &values[N_VALUES];)
    // {
    //     *vp++ = 0;
    // }

    // printf("%d\n", &values[N_VALUES] - &values[0]);//指针减指针得到的是元素的个数

    // 求字符串长度
    // char ch[] = "abcde";
    // mystrlen(ch);
    // printf("%d\n", mystrlen(ch));

    // 初始化数组
    int values[N_VALUES] = {0};
    int *pv;
    // for (pv = &values[N_VALUES]; pv > &values[0];)
    // {
    //     *--pv = 1;
    // }

    for (pv = &values[N_VALUES - 1]; pv >= &values[0]; pv--)
    {
        *pv = 1;
    }

    // 1. 指针未初始化
    // 指针未初始化导致的野指针问题
    //  int a;  // 局部变量不初始化，默认是随机值

    // 为初始化的指针变量，p里面放的是一个随机值
    //  int* p; // 局部的指针变量不初始化，就被初始化随机值，就是随机的一个内存地址

    // 2. 指针越界访问也会发生野指针的问题
    // 数组越界导致的野指针问题
    //  int arr[10] = {0};
    //  int *Parr = arr;

    // int i = 0;
    // for (i = 0; i < 12; i++)
    // {
    //     *Parr = i; // 当Parr指向的范围超过数组arr的范围是，Parr就是野指针
    //      Parr++;
    // }

    // 3.指针指向的内存空间释放
    // 指针指向的内存空间被释放导致的野指针问题
    /*
    int test(){
        int a = 10; //a为局部变量
        return &a;//返回之后a就会被销毁
    }
    int main(){
        int* p = test();  //这样也会发生野指针，因为test执行完成之后里面创建的变量就会被销毁
        *p=20;//当前修改的这个内存空间存储的值已经不是a的了
        system("pause");
        return 0;
    }
    */

    /*
        如何避免野指针
        1.指针初始化
        2.小心指针越界
        3.指针指向空间释放及时置NULL
        int* p = NULL;
        4.指针使用前检查有效性
        if(p != NULL)
    */

    // int a = 10;
    // int* pa = &a;//初始化指针
    // int* p = NULL;//指针无法初始化的时候赋值 NULL （空）

    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int i = 0;
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // int *p = arr;
    // for (i; i < sz; i++)
    // {
    //     printf("%d ", *p);
    //     p++;
    // }
    system("pause");
    return 0;
}