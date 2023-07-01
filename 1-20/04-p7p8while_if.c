#include <stdio.h>

int main()
{
    int line = 0;
    int a = 0;
    printf("学习按1");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("开始学习\n");
        while (line <= 2000)
        {
            printf("学习加++%d\n", line);
            line++;
        }
    }
    if (line >= 2000)
    {
         printf("学习完成\n");
    }
       
    system("pause");
    return 0;
}