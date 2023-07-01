#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf("%d\n", sizeof(int *));
    // printf("%d\n", sizeof(short *));
    // printf("%d\n", sizeof(char *));
    // printf("%d\n", sizeof(double *));

    // 指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
    // int* p; *p 能够访问4个字节
    // char* p; *p 能够访问1个字节
    // doubel* p; *p 能够访问8个字节

    // 指针类型决定了；指针走一部走多远（指针的步长）
    // int* p; p+1 -->  向后偏移4个字节
    // char* p; p+1 --> 向后偏移1个字节
    // double* p; p+1 --> 向后偏移8个字节

    // int a = 0x11223344;
    // int *pa = &a;
    // char *pc = &a;
    // printf("pa=%p\n", pa);
    // printf("pa=%p\n", pa + 1);
    // printf("pc=%p\n", pc);
    // printf("pc=%p\n", pc + 1);
    // printf("%d\n", *pa);
    // printf("%d\n", *pc);

    /* int arr[10] = {0};
    int *Parr = arr;

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(Parr + i) = 1;
    } */

    // 野指针
    //  概念：野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
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
        4.指针使用前检查有效性
    */
    system("pause");
    return 0;
}