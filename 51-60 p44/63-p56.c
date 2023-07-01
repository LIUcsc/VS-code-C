//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//struct s {
//	int a;
//	char b;
//	double s;
//};
//void Init(struct s* ps) {
//	(*ps).a = 1;
//	(*ps).b = 'B';
//	(*ps).s = 3.14;
//}
//void Print1(struct s s) {
//	printf("%d\n",s.a);
//	printf("%c\n", s.b);
//	printf("%lf\n", s.s);
//}
//void Print2(struct s* s) {
//	printf("%d\n", s->a);
//	printf("%c\n", s->b);
//	printf("%lf\n", s->s);
//}
//int main() {
//	struct s s1;
//	Init(&s1);
//
//	Print1(s1);
//	Print2(&s1);
//	return 0;
//}