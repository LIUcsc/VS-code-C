//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//#include <stdlib.h>
//#define N 10
//int main() {
//	//动态内存分配
//
//	/*malloc   动态开辟内存空间  void* malloc (size_t size);
//		如果开辟成功，则返回一个指向开辟好空间的指针。
//		如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//		返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己
//		来决定。
//		如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器。
//	*/
//
//
//	/*calloc  动态开辟内存空间，会初始化内容为全0  void* calloc (size_t num, size_t size);
//	* 
//	函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
//	与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0。
//	*/
//	 
//
//	/*realloc   void* realloc(void* ptr, size_t size);
//	* realloc(NULL,40) 等价于 malloc(40)
//	* 
//	 ptr 是要调整的内存地址
//	size 调整之后新大小
//	返回值为调整之后的内存起始位置。
//	这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到 新 的空间。
//	realloc在调整内存空间的是存在两种情况：
//		情况1：原有空间之后有足够大的空间
//			当是情况1 的时候，要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化。
//
//		情况2：原有空间之后没有足够大的空间
//			当是情况2 的时候，原有空间之后没有足够多的空间时，扩展的方法是：在堆空间上另找一个合适大小
//			的连续空间来使用。这样函数返回的是一个新的内存地址。
//			由于上述的两种情况，realloc函数的使用就要注意一些。
//	*/
//
//
//	/*free   释放内存空间，释放的必须是动态开辟的内存空间  void free (void* ptr);
//	 free函数用来释放动态开辟的内存。
//	 如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//	 如果参数 ptr 是NULL指针，则函数什么事都不做。
//	*/
//	
//	int* a,*p;
//	int i;
//	//开辟内存 
//	//a = (int*)malloc(sizeof(int) * 10);
//	a = (int*)calloc(10, sizeof(int));
//	
//	if (a == NULL) {
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(a + i));
//	}
//	printf("\n");
//	//    使用内存 
//	p = (int*)realloc(a, 80);//返回值可能为空指针，不能直接用a来接收返回值
//	if (p!=NULL) { //判断返回值不为空指针，再将a赋值为这个空间的地址  
//		a = p;
//	}
//	else {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (i = 10; i < 20; i++) {
//		*(a + i) = i+1;
//	}
//	for (i = 0; i < 20; i++) {
//		printf("%d ", *(a + i));
//	}
//	printf("\n");
//	free(a);
//	free(p);
//	a = NULL;  
//	return 0;
//} 