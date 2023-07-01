#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = {0};
    // system 执行系统命令
    system("shutdown -s -t 60"); // shutdown -s -t 60   关机命令
again:
    printf("你的电脑将在一分钟内关机输入”我是猪“取消关机\n请输入>>");
    scanf("%s", input);
    if (strcmp(input, "我是猪") == 0)
    { // strcpm() 比较两个字符串
        // system 执行系统命令
        system("shutdown -a"); // shutdown -s -t 60   取消关机命令
        printf("对你就是猪\n");
    }
    else
    {
        goto again;
    }
    system("pause");
    return 0;
}