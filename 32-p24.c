#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* int Binary(unsigned int n)
{
    // 统计一个数的2进制中有多少个1
    int i;
    int x = 0;
    for (i = 0; i < 32; i++)
    {
        if (((1 << i) & n) != 0)
        {
            x++;
        }
    }
    // while (n > 0)
    // {
    //     if (n % 2 == 1)
    //     {
    //         x++;
    //     }
    //     n = n / 2;
    // }
    return x;
} */
int Binary(int n)
{
    // 统计一个数的2进制中有多少个1
    int i;
    int x = 0;
    while (n)
    {
        n = n & (n - 1);
        x++;
    }

    // for (i = 0; i < 32; i++)
    // {
    //     if (((n >> i) & 1) == 1)
    //     {
    //         x++;
    //     }
    // }

    // while (n > 0)
    // {
    //     if (n % 2 == 1)
    //     {
    //         x++;
    //     }
    //     n = n / 2;
    // }
    return x;
}
void swap(int *a, int *b)
{
    // 交换 两个变量的值
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int get_diff_bit(int x, int y)
{
    // 统计两个数的2进制中有多少位不同
    int c = 0;
    int n = x ^ y;

    while (n)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}
void JOnum(int m)
{
    int i = 0;
    // 00000000 00000000 00000000 11101010
    printf("奇数位\n");
    for (i = 30; i >= 0; i -= 2)
    {
        // 打印二进制奇数位上的数

        printf(" %d", ((m >> i) & 1));
    }
    printf("\n");
    printf("偶数位\n");
    for (i = 31; i >= 0; i -= 2)
    {
        // 打印二进制偶数位上的数

        printf("%d ", ((m >> i) & 1));
    }
    printf("\n");
}

void printArr(int arr[], int sz)
{
    // 用指针打印数组
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int ifprime(int x)
{
    // 判断素数
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void multiplicationTables(int x)
{
    // 乘法口诀表
    int m, n;

    for (m = 1; m <= x; m++)
    {
        for (n = 1; n <= m; n++)
        {
            printf("%-2d*%-2d=%-3d  ", m, n, m * n);
        }
        printf("\n");
    }
}
int leapyear(int n)
{
    // 判断闰年
    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
    {
        return 1;
    }
    return 0;
}
int numX(int x)
{
    // 打印一个整数的每一位
    printf("%d\n", x % 10);
    if (x > 9)
    {

        numX(x / 10);
    }
}

int factorial(int n)
{
    // 求阶乘  递归
    // if (n > 1)
    // {
    //     return n * factorial(n - 1);
    // }
    // return 1;

    // 求阶乘  循环
    int i, x = n;
    for (i = 1; i < n; i++)
    {
        x *= i;
    }
    return x;
}

int myStrlen(char *arr)
{

    int i = 0, x = 0;
    // while (1)
    // {
    //     if (arr[i] == '\0')
    //     {
    //         return x;
    //     }
    //     x++;
    //     i++;
    // }

    if (*arr != '\0')
    {
        return 1 + myStrlen(arr + 1);
    }
    return 0;
}

int my_strlen(char string[])
{
    // 求字符串长度
    int m = 0;
    while (*string != '\0')
    {
        m++;
        string++;
    }
    return m;
}
void reverse(char string[])
{
    // 到序一个字符数组

    // int left = 0;
    // int right = my_strlen(string) - 1;
    // int m = 0;

    // while (left < right)
    // {
    //     m = string[left];
    //     string[left] = string[right];
    //     string[right] = m;
    //     left++;
    //     right--;
    // }

    int len = my_strlen(string);
    int tmp = string[0];
    string[0] = string[len - 1];
    string[len - 1] = '\0';
    if (my_strlen(string + 1) > 1)
    {
        reverse(string + 1);
    }

    string[len - 1] = tmp;
}

int DigitSum(int n)
{
    // 输入 1234，求1+2+3+4的和
    if (n > 9)
    {
        return n % 10 + DigitSum(n / 10);
    }
    return n;
}

double n_k(int n, int k)
{
    // 实现n的k次方
    if (k > 0)
    {
        return n * n_k(n, k - 1);
    }
    else if (k < 0)
    {
        return (1.0 / (n_k(n, -k)));
    }
    return 1;
}
int Fib(int n)
{
    // 按顺序求第N个斐波那契数函数

    // if (n >= 2)
    // {
    //     printf("n=%d \n", n);
    //     return Fib(n - 1) + Fib(n - 2);
    // }
    // return 1;

    int x = 1, y = 1, f = 1;
    // 这种效率更高
    while (n > 2)
    {
        f = x + y;
        x = y;
        y = f;
        n--;
    }
    return f;
} 
int main()
{

    // char ch[] = "abcdefg";
    // reverse(ch);
    printf("\n");
    printf("f=%d\n", Fib(3));

    system("pause");
    return 0;
}