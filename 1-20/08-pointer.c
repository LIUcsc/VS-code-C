// 指针
// 指针大小在32位平台上是4字节，在64位平台上是8字节。
#include <stdio.h>
#include <stdlib.h>

int main (){
    /* int a = 10;//向内存申请了4字节的空间存放10
    int* p = &a;//取出了a的地址给p，p为一个整型指针变量。
    // printf("%p\n",&a);
    // printf("%p\n",p);

    *p = 20;//利用解引用操作符修改了a里面的数据
    printf("%d\n",a); */


    char ch = 'b';
    printf("%c\n",ch);
    char* pc = &ch;
    *pc = 'a';
    printf("%c\n",ch);
    printf("%d\n",sizeof(pc));//计算指针的大小
    system("pause");
    return 0;
}