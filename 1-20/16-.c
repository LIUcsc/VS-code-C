#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int x)
{
    printf("%d\n", x % 10);
    if (x > 9)
    {
        print(x / 10);
    }
}

/* int main()
{
    // 接受一个整型值(无符号) ,按照顺序打印它的每一位。例如:输入:1234,输出 1 2 3 4.
    int a = 9876;
    // scanf("%d",&a);
    print(a);
    system("pause");
    return 0;
} */
int my_strlen(char *arr)
{
    // int i = 0;
    // while (*arr != '\0')
    // {
    //     arr++;
    //     i++;
    // }
    // printf(*arr);
    if (*arr != '\0')
    {
        return 1 + my_strlen(arr + 1);
    }
    return 0;
}

/* int main()
{
    char arr[] = "abc";
    int len;
    // 求字符串长度
    // len = strlen(arr);
    len = my_strlen(arr);
    printf("%d\n", len);

    system("pause");
    return 0;
} */

// 求n的阶乘
int fac(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}

// 求n的阶乘
int fac2(int n)
{

    int i, x = 1;
    // x =  fac(a);
    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}

/* int main()
{
    int a = 5;
    int i, x = 1;
    scanf("%d", &a);
    // x =  fac(a);
    for (i = 1; i <= a; i++)
    {
        x = x * i;
    }
    printf("%d", x);
    system("pause");
    return 0;
} */

// 求斐波那契数列
/* int main()
{
    int x = 1, y = 2;
    int i;
    int n = 50;

    for (i = 1; i < n; i++)
    {
        if (x < y)
        {
            printf("%d\n", x);
            x = x + y;

        }
        else
        {
            printf("%d\n", y);
            y = x + y;

        }

    }
    system("pause");
    return 0;
} */
int Fib(int n)
{
    // 求第N个斐波那契数函数
    int x, y, z;
    if (n <= 2)
    {
        return 1;
    }
    else
    {

        return Fib(n - 1) + Fib(n - 2);
    }
}

int Fib2(int n)
{
    // 求第N个斐波那契数函数
    int z = 0, i;
    long long int x = 1, y = 1, f = 1;
    /* for (i = 1; i < n-1; i++)
    {
        // if (x < y)
        // {

        //     x = x + y;
        //     f = x;
        //     z++;
        // }
        // else
        // {

        //     y = x + y;
        //     f = y;
        //     z++;
        // }
        f = x+y;
        x = y;
        y = f;
        z++;
    } */
    while (n > 2)
    {
        f = x + y;
        x = y;
        y = f;
        n--;
        z++;
    }
    printf("z=%d\n", z);
    return f;
}

int main()
{
    int n = 0;
    int ret = 0;
   /*  scanf("%d", &n);
    ret = Fib2(n);
    printf("%d\n", ret); */
    print(6789);

    system("pause");
    return 0;
}