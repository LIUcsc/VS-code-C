#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 方法1 求一个十进制整数的2进制有多少个1,只能计算正数
    int num = -1;
    int count = 0;
    int i;
    // while (num)
    // {
    //     if (num % 2 == 1)
    //     {
    //         count++;
    //     }
    //     num = num / 2;
    // }

    // 方法2 求一个十进制整数的2进制有多少个1,可以计算负数
    //  for (i = 0; i < 32; i++)
    //  {
    //      //算术右移 右边丢弃，左边补原符号位
    //      if (1 == ((num >> i) & 1)) //& - 按2进制位 与，对应的2进制位只要有一个为0就为0，两个为1才为1
    //      {
    //          count++;
    //      }
    //  }
    // 方法3
    while (num)
    {
        count++;
        num &= (num - 1);
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}