#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {0};
    int *p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;
    /* for (i = 0; i < sz; i++)
     {
         // printf("arr[%d] = %p <=====> p+%d = %p\n", i, &arr[i], i, p + i);
         printf("  %p <=====> %p\n", &arr[i], p + i);
     } */

    for (i = 0; i < sz; i++)
    {
        *(p + i) = i;
    }
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *(p + i));
    }

    // printf("%p\n", arr); // 数组名是首元素的地址
    // printf("%p\n", arr + 1);

    // printf("%p\n", &arr[0]); //&数组名[下标] 下标元素的地址
    // printf("%p\n", &arr[0] + 1);

    // printf("%p\n", &arr); //&数组名  取出的是整个数组的地址   typedef
    // printf("%p\n", &arr + 1);
    system("pause");
    return 0;
}