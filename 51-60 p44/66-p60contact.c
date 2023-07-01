
#include "66-p60contact.h"



//初始化通讯录 静态版
//void InitContact(struct Contact* con) 
//{
//	//设置内存
//	//库函数 void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
//	memset(con->data, 0, sizeof(con->data));
//	con->size = 0;//设置通讯录最初只有0个元素
//}


//初始化通讯录 动态版
int InitContact(struct Contact* con)
{
	assert(con);
	//动态开辟内存
	con->data = (Address_List*)calloc(DEFAULT_SZ, sizeof(Address_List));
	if (con->data == NULL) {
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	con->size = 0;//设置通讯录最初只有0个元素
	con->capacity = DEFAULT_SZ;
	return 0;
}


//通用查找函数  不对外暴露
static int General_Sezrch(const struct Contact* con, char name[]) {
	int i;
	for (i = 0; i < con->size; i++) {
		if (strcmp(name, con->data[i].Name) == 0) {
			return i;//找到了返回下标
		}
	}
	return -1;//没找到返回-1
}

//添加联系人  静态
//void AddContact(struct Contact* con) 
//{
//	if (con->size == MAX) {
//		printf("已满");
//	}
//	else {
//		printf("输入姓名");
//		scanf("%s", con->data[con->size].Name);
//		printf("输入电话号码");
//		scanf("%s", con->data[con->size].PhoneNumber);
//		printf("输入性别");
//		scanf("%s", con->data[con->size].sex);
//		printf("输入住址");
//		scanf("%s", con->data[con->size].address);
//		printf("输入年龄");
//		scanf("%d", &(con->data[con->size].age));
//		con->size++;
//	}
//	
//}
//添加联系人  动态
int AddContact(struct Contact* con)
{
	assert(con);//检查变量的有效性
	
	//检查是否需要扩容
	if (con->size==con->capacity) {
		CheckCapacity(con);//通讯录扩容
	}
	printf("输入姓名");
	scanf("%s", con->data[con->size].Name);
	printf("输入电话号码");
	scanf("%s", con->data[con->size].PhoneNumber);
	printf("输入性别");
	scanf("%s", con->data[con->size].sex);
	printf("输入住址");
	scanf("%s", con->data[con->size].address);
	printf("输入年龄");
	scanf("%d", &(con->data[con->size].age));
	con->size++;
	return 0;

}

//扩容
int CheckCapacity(Contact* con){
	Address_List* p;
	p = (Address_List*)realloc(con->data, (con->capacity + INC_SZ) * sizeof(Address_List));
	if (p != NULL) {
		con->data = p;
		con->capacity += INC_SZ;
	}
	else {
		printf("CheckCapacity::%s\n", strerror(errno));
		return 1;
	}
	
}


//显示
void ShowContact(const struct Contact* con){
	int i;

		 
	//printf("姓名          电话号码          年龄         性别        住址\n");
	printf("%-5s\t%-12s\t%-2s\t%-1s\t%-20s\n","姓名","电话号码","年龄","性别","住址");
	if (con->size==0) {
		printf("空\n");
	}
	else {
		for (i = 0; i < con->size; i++) {
			//输出所有数据
			printf(
				"%-5s\t%-12s\t%-2d\t%-1s\t%-20s\n", 
				con->data[i].Name,
				con->data[i].PhoneNumber,
				con->data[i].age,
				con->data[i].sex,
				con->data[i].address
			);

		}
	}
	
}

//删除
void DelContact(struct Contact* con) {
	char input[MAX_NAME] = "";
	int i = 0,n;
	printf("请输入你要删除的姓名>>");
	scanf("%s", input);
	i = General_Sezrch(con, input);
	if (i>=0) {
		//删除数据
		for (n = i; n < con->size - 1; n++) {
			con->data[n] = con->data[n + 1];
		}
		con->size--;
		printf("删除完成\n");
	}
	else {
		
		printf("没找到你要删除的人\n");
	}
	

}

//查找
void SezrchContact(const struct Contact* con) {
	char name[MAX_NAME] = "";
	int i;
	printf("输入姓名>>");
	scanf("%s", name);
	
	i = General_Sezrch(con,name);
	
	if (i >= 0) {
		printf("%-5s\t%-12s\t%-2s\t%-1s\t%-20s\n", "姓名", "电话号码", "年龄", "性别", "住址");
		printf(
			"%-5s\t%-12s\t%-2d\t%-1s\t%-20s\n", 
			con->data[i].Name,
			con->data[i].PhoneNumber,
			con->data[i].age,
			con->data[i].sex,
			con->data[i].address
		);
	}
	else {
		printf("没找到\n");
	}
}
//修改
void ModuleContact(struct Contact* con) {
	char name[MAX_NAME] = "";
	int i;
	printf("输入修改人姓名>>");
	scanf("%s", name);
	i = General_Sezrch(con, name);
	if (i==-1) {
		printf("没找到你要修改的值\n");
	}
	else {
		printf("输入姓名");
		scanf("%s", con->data[i].Name);
		printf("输入电话号码");
		scanf("%s", con->data[i].PhoneNumber);
		printf("输入性别");
		scanf("%s", con->data[i].sex);
		printf("输入住址");
		scanf("%s", con->data[i].address);
		printf("输入年龄");
		scanf("%d", &(con->data[i].age));
		printf("修改完成\n");
		printf("%-5s\t%-12s\t%-2s\t%-1s\t%-20s\n", "姓名", "电话号码", "年龄", "性别", "住址");
		printf(
			"%-5s\t%-12s\t%-2d\t%-1s\t%-20s\n", 
			con->data[i].Name, 
			con->data[i].PhoneNumber,
			con->data[i].age, 
			con->data[i].sex,
			con->data[i].address
		);
	}
}

int qsort_if_age(const void* data1, const void* data2) {
	//return ((*(struct Address_List*)data1).age - (*(struct Address_List*)data2).age);
	return strcmp((*(struct Address_List*)data1).Name, (*(struct Address_List*)data2).Name);
}
//排序
void SortContact(struct Contact* con) {
	//printf("未完成\n");
	int x, y,min,max;
	struct Address_List temp;
	for (x = 0; x < con->size;x++) {
		min = x;
		max = con->size - 1 - x;
		for (y = x; y < con->size-x;y++) {
			if (con->data[y].age > con->data[max].age) {
				max = y;
			}
			if (con->data[y].age < con->data[min].age) {
				min = y;
			}
		}
		if (min!=x) {
			temp = con->data[x];
			con->data[x] = con->data[min];
			con->data[min] = temp;
		}
		if (max == x)max = min;
		if (max!=con->size-1-x) {
			temp = con->data[con->size - 1 - x];
			con->data[con->size - 1 - x] = con->data[max];
			con->data[max] = temp;
		}
	}
	/*qsort(con->data, sizeof(con->data) / sizeof(con->data[0]), sizeof(con->data[0]), qsort_if_age);*/
	printf("排序完成\n");
	

}


//销毁通讯录
void DestroyContact(Contact* con) {
	assert(con);
	free(con->data);
	con->data = NULL;
}
