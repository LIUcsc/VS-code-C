#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
    int z = x + y;
    return z;
}
/* int main()
{
    int x, y, z;
    printf("请输入数字");
    scanf("%d%d", &x, &y);
    z = Add(x, y);
    printf("结果为%d\n", z);
    system("pause");
    return 0;
} */

int main()
{
    int a = 0;
    int b = 2;
    if (a == 0)
        if (b == 2)
            printf("hehe\n");
        else
            printf("haha");
    
    system("pause");
    return 0;
}
