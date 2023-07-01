/* 字符串+转译字符+注释 */
#include <stdio.h>
#include <string.h>
int main (){

    char arr[] = "abc";
    char arr2[] = {'a','b','c','\0'};  /* \0 字符串的结束标志 */

    printf("%s\n",arr);
    printf("%s\n",arr2);
    printf("%d\n", strlen(arr));/* strlen  string - length  用来计数字符串长度 */
    printf("%d\n", strlen(arr2));
    system("pause");
    return 0;

}