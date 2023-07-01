// struct 结构体
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 创建一个结构体类型
struct Book
{
    char name[20];
    short price;
};
int main()
{
    // 利用结构体类型创建一个该类型的结构体变量
    struct Book b1 = {"C语言", 20};
    struct Book b2 = {"java", 30};
    struct Book* pb = &b2;
    // 利用strcpy修改书名，因为书名是字符串类型的数组所以不能直接修改
    strcpy(b2.name,"c++");//strcpy - string copy 字符串拷贝，库函数-string.h
    printf("书名：%s\n",pb->name);
    printf("价格：%d\n",pb->price);
    // 利用pb打印书的信息
    // printf("书名：%s\n",(*pb).name);
    // printf("价格：%d\n",(*pb).price);
    // printf("书名:%s\n", b1.name);
    // printf("价格:%d\n", b1.price);
    system("pause");
    return 0;
}
