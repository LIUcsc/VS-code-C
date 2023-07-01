#include <stdio.h> /* 引入头文件 */
#include <stdlib.h>

int Max(int x, int y)
{
    int max;
    if (x < y)
    {
        max = y;
    }
    else
    {
        max = x;
    }
    return max;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    scanf("%d%d", &num1, &num2); /* &取地址符号 */
    sum = num1 + num2;
    // sum = Max(num1, num2);
    printf("%d + %d = %d\n", num1, num2, sum); /*"%d%d%d",num1,"+",num2,"=",   "%d%c%d%c%d",*/
    printf("%d", sum);
    system("pause");
    return 0;
}