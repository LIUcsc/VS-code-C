#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* int main(){
    char ch[20] = {"abcdemu"};
    char ch2[20] = {};

    strcpy(ch2,ch);
    system("pause");
    return 0;
} */
/* void swap(int* x, int* y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;

    // return x, y;
}
int main()
{

    int a = 1;
    int b = 2;
    printf("01-  a=%d  b=%d\n", a, b);
    // int* x = ;
    // int* y = ;
    swap(&a,&b); //传址调用
    //swap(a,b,); // 传值调用
    printf("02-  a=%d  b=%d\n", a, b);
    system("pause");
    return 0;
} */

/* int main()
{
    // 100 ~ 1000 的水仙花数。
    int i = 123;
    int x, y, z;
    for (i; i < 1000; i++)
    {
        x = i / 100;       // 百位位
        y = (i / 10) % 10; // 十位
        z = i % 10;        // 个位

        x = x * x * x;
        y = y * y * y;
        z = z * z * z;
        if ((x + y + z) == i)
        {
            printf("水仙花数=%d\n", i);
        }
    }
    system("pause");
    return 0;
}
 */

// 判断 素数 函数
int Primzahl(int x)
{
    int i;
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            // printf("这个数不是素数\n");
            // break;
            return 0;
        }
    }
    if (i >= sqrt(x))
    {
        // printf("这个数是素数\n");
        return 1;
    }
}
/* int main()
{
    int x;
    for ( x = 100; x < 200; x++)
    {
       if(Primzahl(x)==1){
        printf("%d\n",x);
       }
    }
    system("pause");
    return 0;
} */

// 判断 闰年
int LeapYear(int x)
{
    if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
    {
        // printf("是的\n");
        return 1;
    }
    else
    {
        // printf("不是的\n");
        return 0;
    }
}
/* int main()
{
    int x;
    for (x = 2000; x < 2100; x++)
    {
        if (LeapYear(x) == 1)
        {
            printf("%d\n", x);
        }
    }
    system("pause");
    return 0;
} */

// 二分查找
int binary_search(int arr[], int x, int sz)
{

    int r = sz - 1;
    int l = 0;
    int mid;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (x > arr[mid])
        {
            l = mid + 1;
        }
        else if (x < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

/* int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    scanf("%d", &x);
    int ret = binary_search(arr, x, sz);
    if (ret == -1)
    {
        printf("没找到\n");
    }
    else
    {

        printf("下标为:%d\n", ret);
    }
    system("pause");
    return 0;
} */


// 执行函数所传入的值就加1
void add(int* num){
    *num += 1; //不能直接写 ++，++ 的执行优先级要高于 * 
}


int main()
{
    int num = 0;
    add(&num);
    printf("num=%d\n",num);
    add(&num);
    printf("num=%d\n",num);
    add(&num);
    printf("num=%d\n",num);
    add(&num);
    printf("num=%d\n",num);
    
    system("pause");
    return 0;
}