#include <stdio.h>
#include <stdlib.h>

// 交换 数组（数组一样大）

void arrprintf(int arr[], int sz)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void arr_swap(int arr1[], int arr2[], int sz)
{
    int i;
    int test;
    for (i = 0; i < sz; i++)
    {
        test = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = test;
    }
}
int main()
{
    /*  int arr1[] = {1, 2, 3, 4, 5};
     int arr2[] = {0, 9, 8, 7, 6};

     int sz = sizeof(arr1) / sizeof(arr1[0]);

     arrprintf(arr1, sz);
     arrprintf(arr2, sz);

     arr_swap(arr1, arr2, sz);

     arrprintf(arr1, sz);
     arrprintf(arr2, sz); */
    int a = 0x11223344;
    char *pc = (char *)&a;
    *pc = 0;
    printf("%x\n", a);

    system("pause");
    return 0;
}

/* void init(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        arr[i] = i+1;
    }
}

void reverse(int arr[], int sz)
{
    // int man = sz / 2;
    // int arr1;
    // int i = 0;
    // for (i = 0; i <= man; i++)
    // {
    //     sz--;
    //     arr1 = arr[i];
    //     arr[i] = arr[sz];
    //     arr[sz] = arr1;
    // }
    int left = 0;
    int right = sz - 1;
    int arr1;
    while (left < right)
    {
        arr1 = arr[left];
        arr[left] = arr[right];
        arr[right] = arr1;
        left++;
        right--;
    }
}
void arrprintf(int arr[], int sz)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    init(arr, sz);      // 初始化数组
    arrprintf(arr, sz); // 打印数组
    reverse(arr, sz);   // 反置数组
    arrprintf(arr, sz); // 打印数组
    system("pause");
    return 0;
} */