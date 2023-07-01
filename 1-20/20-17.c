#include <stdio.h>
#include <stdlib.h>

/* int main()
{

    // a=3,b=5 交换两个值，不能使用第三个变量；
    int a = 3; // 00000011
    int b = 5; // 00000101
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // ^  按位异或，对应的2进制位相同为0，相反为1。
    a = a ^ b; // 000000110
    b = a ^ b; // 000000011
    a = a ^ b; // 000000101
    printf("a=%d b=%d\n", a, b);

    system("pause");
    return 0;
} */

int main()
{

    // 找出数组中只出现过一次的数
    int arr[] = {4, 1, 2, 5, 1, 3, 4, 3, 5, 1, 2, 3, 1, 2, 5, 2, 3};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i, n, x = 0, y = 0;
    for (i = 0; i < sz; i++)
    {
        x = x ^ arr[i]; // 这种算法的前提是，相同的数只能以偶数出现，(1,1,2),(1,2,2,2,2)
        y++;
    }
    printf("y=%d\n", y);
    printf("x=%d\n", x);

    // for (i = 0; i < sz; i++)
    // {
    //     x = 0;
    //     for (n = 0; n < sz; n++)
    //     {
    //         if (arr[i] == arr[n])
    //         {
    //             x++;
    //             y++;
    //         }
    //     }
    //     if (x == 1) // x=1说明它只和相同，没有其它值和它相同，所以它就是唯一只出现过一次的值
    //     {

    //         printf("x=%d\n", arr[i]);
    //         break;
    //     }
    // }

    system("pause");
    return 0;
}