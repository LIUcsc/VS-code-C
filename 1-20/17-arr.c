#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* int main(){

    int arr1[10] = {1,2,3,4};
    char arr2[5] = {'a','b','c'};
    char arr3[5] = "abc";
    char arr4[] = "abc";
    printf("%d\n",sizeof(arr4));
    printf("%d\n",strlen(arr4));
    system("pause");
    return 0;
} */

/* int main()
{

    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'};

    printf("%d\n", sizeof(arr1));
    printf("%d\n", sizeof(arr2));
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2)); //随机值
    system("pause");
    return 0;
} */

int main()
{

    // char arr1[] = "abcdef";
    // int len = strlen(arr1);
    // int i = 0;
    // for (i; i < len; i++)
    // {
    //     printf("%c ",arr1[i]);
    // }

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr2) / sizeof(arr2[0]) ;
    int i = 0;
    for (i=0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    system("pause");
    return 0;
}


/* int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(i;i<sz;i++){
        printf("arr[%d]=%p\n",i,&arr[i]);
    }
    system("pause");
    return 0;
} */