#include <stdio.h>
#include <stdlib.h>
/*

static 修饰局部变量，局部变量的生命周期变长。


static 修饰全局变量，全局变量就不能被外部引用。
改变了全局变量的作用域，让静态的全局变量只能在自己所在的源文件内部所使用。
出了源文件就不能使用了。


static 修饰的函数，改变了函数的链接属性。外部链接属性，变成了，内部链接属性
不准确的说法就是改变了函数的作用域

 */
// 声明外部函数
// extern int Add(int, int);



/* void test()
{
    static int a = x;
    a++;
    printf("a= %d\n", a);
}
int main()
{

    int i = 0;
    int sum = 0;
    
    while (i < 5)
    {
        test();
        i++;
    }

    // sum = Add(x,z);
    printf("%d\n", sum);
    
} */

// define 不是关键子，是一个指令
// #define 定义常量
// #define x 1

// #define 定义宏
#define MAX(x,y) (x>y?x:y)

int main(){

    int a=1,b=2;
    int max = MAX(a,b);
    printf("%d\n",max);
    system("pause");
    return 0;
}