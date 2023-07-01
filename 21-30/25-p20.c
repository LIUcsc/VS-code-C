#include <stdio.h>
#include <stdlib.h>

// 结构体,用来描述复杂类型 
struct Stu
{
    char name[20];
    int age;
};

int main()
{
    struct Stu s1 = {"张三", 18};
    struct Stu s2 = {"李四", 20};

    // 指针类型  指针名  取出s1的地址
    struct Stu *ps = &s1;

    // printf("%s\n", (*ps).name);
    // printf("%d\n", (*ps).age);
    printf("%s\n", ps->name);//结构体指针 -> 成员名
    printf("%d\n", ps->age);

    // printf("%s\n", s1.name);
    // printf("%d\n", s1.age);
    // printf("%s\n", s2.name);
    // printf("%d\n", s2.age);
    system("pause");
    return 0;
}