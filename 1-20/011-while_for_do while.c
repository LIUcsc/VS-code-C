/*
    循环语句
while
for
do While
int main(){
    system("pause");
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
/* int main()
{
    // 计算 素数,只能被1和自己整除的数
    int i;
    int y;
    float x;
    // for (i = 100; i <= 200; i++)
    for (i = 101; i <= 200; i+=2)
    {
        // sqrt -- 开平方
        for (y = 2; y <= sqrt(i); y++)
        {
            if (i % y == 0)
            {
                break;
            }
        }
        if (y > sqrt(i))
        {
            printf("素数:%d\n", i);
        }
    }
    // x = sqrt(200);
    // printf("素数:%f\n", x);
    system("pause");
    return 0;
} */

/* int main()
{
    // 计算闰年
    int year;
    int count = 0;
    for (year = 2020; year <= 2100; year++)
    {
        // if (year % 4 == 0 && year % 100 != 0  )
        // {
        //     printf("闰年:%d\n",year);
        //     count++;
        // }else if (year % 400 ==0)
        // {
        //    printf("闰年2--:%d\n",year);
        //    count++;
        // }
        if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
        {
            printf("闰年:%d\n",year);
            count++;
        }
    }
    printf("闰年count:%d\n", count);
    system("pause");
    return 0;
} */
/* int main()
{
    // 求最大公约数--辗转相除法
    int m = 24;
    int n = 18;
    int x ;
    // while(x){
    //     x = m%n;
    //     if(x==0){
    //         printf("%d\n",n);
    //     }
    //     m = n;
    //     n = x;
    // }
    while (x = m % n)
    {
        // x = m % n;
        m = n;
        n = x;
    }
    printf("%d\n", n);
    system("pause");
    return 0;
} */
/* int main()
{
    // 3的倍数
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
} */
/* int main()
{
    // char arr[] = {3,2,1};

    // int sz = sizeof(arr)/sizeof(arr[0]);
    // int i=0;
    // int a,b,c;
    // int y;
    // for(i;i<3;i++){
    //      y = i+1 ;
    //     if (arr[i]<arr[y])
    //     {
    //         a = arr[i];
    //         b = arr[y];
    //         arr[y] = a;
    //         arr[i] = b;
    //     }
    // }
    int a, b, c;
    int x, y;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        x = a;
        a = b;
        b = x;
    }
    if (a < c)
    {
        x = a;
        a = c;
        c = x;
    }
    if (b < c)
    {
        x = b;
        b = c;
        c = x;
    }

    printf("%d%d%d\n", a, b, c);
    system("pause");
    return 0;
} */
/* int main()
{
    // 模拟用户登录
    char password[] = "123456";
    char mypassword[20] = {};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码：");
        scanf("%s", mypassword);
        // printf("密码：%s\n", mypassword);
        if (strcmp(mypassword,password)==0)
        {
            system("cls");
            printf("登录成功\n");
            break;
        }
        else
        {
            system("cls");
            printf("密码错误\n");
        }
    }
    if(i==3){
        system("cls");
        printf("登录失败\n");
    }
    system("pause");
    return 0;
} */
/* int main(){
    // 4.演示多个字符从两端移动，向中间汇集
    char ch1[] = {"welcome to bit!!!!!!"};
    char ch2[] = {"####################"};
    int left = 0;
    int right;
    int x;
    // int sz =  sizeof(ch1)/sizeof(ch1[0]);
    int sz = strlen(ch1);
    int min = sz/2;
    // printf("请输入你要打印的字符：");
    // scanf("%s",&ch);
    // printf("ch:%s\n",ch);
    right = sz - 1;

    // printf("right=%d\n",right);
    // printf("%s\n",ch1);
    // printf("%s\n",ch2);
    while (left<=right)
    {

        ch2[left] = ch1[left];
        ch2[right] = ch1[right];
        // printf("ch:%s\n",ch);
        printf("%s\n",ch2);
        Sleep(1000);//计时器
        system("cls");
        left++;
        right --;
    }
    printf("%s\n",ch2);

    // for(x=0;x<min;x++)
    // {

    //     ch2[left] = ch1[left];
    //     ch2[right] = ch1[right];
    //     // printf("ch:%s\n",ch);
    //     printf("%s\n",ch2);
    //     left++;
    //     right --;
    // }
    system("pause");
    return 0;
} */

int main(){
    //   3.二分查找
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k;
    int sz = sizeof(arr) / sizeof(arr[0]); // 计算出数组的个数
    int left = 0;
    int right = sz - 1;
    int mid = (left + right) / 2;
    printf("请输入你要找的值：");
    scanf("%d", &k);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > k)
        {
            right = mid - 1;
            // printf("right为：%d\n", right);   
            // if (arr[right] == k)
            // {
            //     printf("1.找到了下标为：%d\n", right);
            //     break;
            // }
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
            // printf("left为：%d\n", left);
            //  if (arr[left] == k)
            //  {
            //      printf("2.找到了下标为：%d\n", left);
            //      break;
            //  }
        }
        else
        {
            printf("3.找到了下标为：%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("没有找到");
    }
    system("pause");
    return 0;
}
/* int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    int ch = 0;
    int ret = 0;
    int b = 1;
    char password[20] = {0};
    // EOF - end of file 文件结束标志
    while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
    while (ch != 'Y')
    {
        printf("请输入密码>");
        scanf("%s\n", &password);
        printf("请确认密码Y/N>");
        ch = getchar();
        if (ch == 'Y')
        {
            printf("确认成功");
            break;
        }
        else if (ch == 'N')
        {
            printf("请重新输入密码");
            continue;
        }
        else
        {
            printf("输入错误");
            continue;
        }
    }

    printf("请输入密码>");
    scanf("%s", password);
    // 清空输入缓冲区
    while(b != 10){ //读到换行符（\n）就结束循环执行之后的代码
        b = getchar();//读取输入缓冲区里面的数据
        // printf("b=%c\n",b);
    }
    while ((b = getchar()) != '\n')// 读取输入缓冲区里面的数据，读到换行符（\n）就结束循环执行之后的代码
    {
        ;
        // printf("b=%c\n",b);
    }

    printf("请确认密码Y/N>");
    ret = getchar();
    if (ret == 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("输入错误\n");
    }

     while ((ch = getchar()) != EOF)
     {
         if (ch < '0' || ch > '9')
             continue;
         putchar(ch);
     }


     do
        循环语句；
     while(表达式)

     //循环至少执行一次

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    //              1.计算n的阶乘。
    int n = 0;
    int i = 1;
    int x = 1;
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        x = x * i;
    }
    printf("n的阶乘为:%d\n", x);

    //              2.计算1!+2!+3!+4!...+10!
    // 1的阶乘+2的阶乘+3的阶乘
    // int n = 0, sum = 0, y = 0;
    // int ret = 1;
    for (n = 1; n <= 3; n++)
    {
        ret = 1;
        for (y = 1; y <= n; y++)
        {
            ret = ret * y;
        }
        sum += ret;
    }
    // for (n = 1; n <= 10; n++)
    // {

    //         ret = ret * n;

    //     sum += ret;
    // }
    // printf("sum=:%d\n", sum);




    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组里有多少个元素
    printf("请输入你要找的数：");
    scanf("%d", &k);

    for (i; i < sz; i++)
    {
        if (arr[i] == k)
        {
            printf("找到了下标为：%d\n", i);
            break;
        }
    }
    if (i == sz)
    {
        printf("没有找到");
    }

    //              5.编写代码模拟用户登录情景，并且只能登录三次 密码

    char password[10] = "12345";
    char myword;
    int i = 0;
    printf("请输入密码：%c\n",password);

    while (i <= 3)
    {

        scanf("%c", &myword);
        if (myword == password)
        {
            printf("登录成功");
            break;
        }
        else if (i < 3)
        {
            printf("请重新输入密码");
            i++;
            continue;
        }
        else
        {
            printf("登陆失败");
            break;
        }
    }

    system("pause");
    return 0;
} */
