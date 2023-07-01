#include <stdio.h>
/* 常量 */
#define num1 10 /* 定义标识符常量 */

enum Sex   /* 枚举常量 关键字 enum*/
{
    MALE,
    FEMALE
};
int main()
{

    //  3; /* 字面常量 */
    const int num = 2; /* const修饰的常变量 */

    printf("%d%d\n", num, num1);
    printf("%d\n", MALE );//0
    printf("%d\n", FEMALE);//1

    system("pause");
    return 0;
}