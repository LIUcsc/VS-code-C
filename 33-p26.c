#include <stdio.h>
#include <stdlib.h>

// struct Stu // 结构体类型
// {
//     char name[10];
//     short age;
//     char sex[5];
//     char id[20];
//     char tele[12];
// } s1, s2, s3; //定义三个同类型的全局变量

typedef struct Stu // 结构体类型
{
    char name[10];
    short age;
    char sex[5];
    char id[20];
    char tele[12];
} Stu; // 重新定义类型名

void Print(Stu student)
{
    printf("姓名：%s\n", student.name);
    printf("年龄：%d\n", student.age);
    printf("性别：%s\n", student.sex);
    printf("学号：%s\n", student.id);
    printf("电话：%s\n", student.tele);
}

void Print2(Stu *student)
{
    printf("姓名：%s\n", student->name);
    printf("年龄：%d\n", student->age);
    printf("性别：%s\n", student->sex);
    printf("学号：%s\n", student->id);
    printf("电话：%s\n", student->tele);
}
int main()
{

    struct Stu student1 = {"张珊", 18, "女", "123456", "123666666"}; // 初始化结构体类型
    Stu student2 = {"李四", 23, "男", "45678", "12688888888"};
    Print(student1);
    Print2(&student2);
    system("pause");
    return 0;
}

struct S // 结构体类型
{
    int a;
    char b[10];
};

struct T
{
    int c;
    struct S s;
    char *p;
};
// int main()
// {
//     char arr[] = "hahaha";
//     struct T t1 = {1, {2, "ab"}, arr};

//     printf("c=%d\n", t1.c);
//     printf("a=%d\n", t1.s.a);
//     printf("b=%s\n", t1.s.b);
//     printf("p=%s\n", t1.p);
//     system("pause");
//     return 0;
// }