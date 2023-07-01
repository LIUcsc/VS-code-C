#include <stdio.h>
#include <stdlib.h>

/* int main()
{
    // 二维数组的初始化可以省略行，但不能省略列
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int arr3[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int i, y;
    for (i = 0; i < 3; i++)
    {
        for (y = 0; y < 4; y++)
        {
            // printf("arr1[%d][%d]=%d  ",i,y,arr2[i][y]);
            printf("%d = %p  ",arr2[i][y], &arr2[i][y]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
} */

//                          数组冒泡排序
void arr_sort(int arr[], int len)
{
    int max;
    int i, n,y=0;
    int x = len;
    for (i = 0; i <= len - 1; i++)
    {
        int flag = 1;
        for (n = 0; n < len - 1 - i; n++)
        {
            if (arr[n] > arr[n + 1])
            {
                max = arr[n];
                arr[n] = arr[n + 1];
                arr[n + 1] = max;
                flag = 0;//数据没有进行交换位置，就说明已经有序，不需要再判断
            }
            y++;//统计循环了多少次
        }
        if(flag == 1){//判断是否交换过位置
            break;
        }
    }

    /* for (n = 0; n < len - 1; n++)
    {
        for (i = n + 1; i <= len - 1; i++)
        {
            if (arr[n] > arr[i])
            {
                max = arr[n];
                arr[n] = arr[i];
                arr[i] = max;
                
            }
            y++;
        }
    } */
    printf("y=%d\n", y);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;
    // 排序
    arr_sort(arr, sz);

    for (i = 0; i < sz; i++)
    {
        printf("%d  ", arr[i]);
    }

    system("pause");
    return 0;
}


/* 
数组名是数组首位元素的地址（有两个列外）
1.sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组。
2.&数组名，取出的是数组的地址，&数组名，数组名表示整个数组。取出的是整个数组的地址，
  &数组名，就不再是这个数组首元素的地址了，是这个数组的地址。

除这两种情况外，其它的数组名都代表的是这个素组首元素的地址
 */