#include <stdio.h>
#include <stdlib.h>
void test1(int arr[])
{
    printf("%d\n", sizeof(arr));
}
void test2(char ch[])
{
    printf("%d\n", sizeof(ch));
} 
int main()
{
    // short s = 0;//短整型占两个字节
    // int a = 10;
    // printf("%d\n", sizeof(s = a + 5));//sizeof 里面的运算是不会进行的
    // printf("%d\n",s);//所以 s 还是0

    int a = 0;
    //  ~ 按(2进制)位取反
    //  00000000 00000000 00000000 00000000 0的源码
    //  11111111 11111111 11111111 11111111 0按位取反后 为一个负数的补码
    //  11111111 11111111 11111111 11111110 减1为反码
    //  10000000 00000000 00000000 00000001 去反后为源码
    printf("%d\n", ~a);

    // int a = 11;
    // int b = 1;
    // a = a | (b << 2);//a=1111
    // printf("%d\n", a); // 15
    // a = a & (~(b << 2));//a=1011
    // printf("%d\n", a); // 11

    // int arr[10] = {0};
    // char ch[10] = {0};
    // printf("%d\n", sizeof(arr)); // 40
    // printf("%d\n", sizeof(ch));  // 10
    // test1(arr);                  // 8  函数传递数组默认传递的是一个地址
    // test2(ch);                   // 8

    // int i = 0, a = 0, b = 2, c = 3, d = 4;
    // // 后置++是先使用再++
    // //   i = a++ && ++b && d++; //逻辑与有一个为假后面就不再执行了，左边为假右边就不再执行了
    // i = a++ || ++b || d++; // 逻辑或有一个为真后面就不再执行了，左边为真右边就不再执行了
    // printf("%d\n", i);
    // printf("%d%d%d%d\n", a, b, c, d);

    // 三目运算符
    // int a = 0;
    // int b = 0;
    // b = (a > 5) ? 3 : -3;
    // printf("%d\n", b);

    // int a = 1;
    // int b = 2;
    // int max;
    // max = (a > b ? a : b);
    // printf("%d\n", max);

    // 逗号表达式，就是用逗号隔开的多个表达式。
    // 逗号表达式，从左向右依次执行。
    // 整个表达式的结果是最后一个表达式的结果。
    system("pause");
    return 0;
}