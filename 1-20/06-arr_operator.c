#include <stdio.h>
#include <stdlib.h>
/* int Add(int x, int y)
{
    int z;
    z = x + y;
    return z;
} */
/* int main(){

    int arr[10] = {1,2,3,4,5,56,6,78,89,99};
    int i=0;
    while(i<10){
        printf("%d\n",arr[i]);
        i++;
    }
    system("pause");
    return 0;
} */

/*
    操作符

    算数运算符
        +  —  *  /  %

    移位操作符
        //  << 左移
        //  >> 右移

    位操作符
        // &  按位与，对应的2进制位相同位1，其他位0。
        // |  按位或，对应的2进制位有一个为1就为1，两个都为0才为0。
        // ^  按位异或，对应的2进制位相同为0，相反为1。

    赋值运算符
        =  +=  -=  *=  /=  &=  ^=  |=   >>=   <<=

     单目运算符
            //  !         逻辑反操作
            //  -
            //  +
            //  &         取地址
            //  sizeof    计算变量和类型占用的空间以字节为单位
            //  ~         对一个数的二进制按位取反
            //  ++
            //  --
            //  *
            //  (类型)     强制类型转换

     && 逻辑与 两边都为真才返回真
     || 逻辑或 两边都为假才返回假

    条件运算符
        exp1 ? exp2 : exp3
 */

/* int main()
{

    // 移位操作符移的是2进制位
    //  << 左移
    //  >> 右移
    停止循环
    int a = 1;
    int b = a << 4;
    printf("%d\n", a);
    printf("%d\n", b);
    system("pause");
    return 0;
} */

/* int main()
{
    // 位操作符
    // &  按位与，对应的2进制位相同为1，其他为0。
    // |  按位或，对应的2进制位有一个为1就为1，两个都为0才为0。
    // ^  按位异或，对应的2进制位相同为0，相反为1。
    int a = 3;
    int b = 5;
    int c = a ^ b;
    printf("%d\n", c);
    system("pause");
    return 0;
} */

int main()
{
    // 单目运算符
    //  !         逻辑反操作
    //  -
    //  +
    //  &         取地址
    //  sizeof    计算变量和类型占用的空间以字节为单位
    //  ~         对一个数的二进制按位取反
    //  ++
    //  --
    //  *
    //  (类型)     强制类型转换

    int a = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("a=%d\n", sizeof(a));
    printf("arr=%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr) / sizeof(arr[0]));//32/4=8

    // int b = ~a;
    // printf("a=%d\n", a);
    // printf("b=%d\n", b);
    system("pause");
    return 0;
}

/* int main()
{

    // && 逻辑与 两边都为真才返回真
    // || 逻辑或 两边都为假才返回假
    system("pause");
    return 0;
} */
