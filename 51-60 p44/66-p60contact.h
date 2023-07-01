
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
//#pragma once
#define DEFAULT_SZ 3 //通讯录默认大小
#define INC_SZ 2 //通讯录每次扩容的大小
#define MAX 1000
#define MAX_NAME 20
#define MAX_PN 12
#define MAX_SEX 10
#define MAX_ADDRESS 100

//枚举常量
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEZRCH,
	MODIFY,
	SHOW,
	SORT
};
//创建通讯录类型
typedef struct Address_List {
	char Name[MAX_NAME];
	char PhoneNumber[MAX_PN];
	char sex[MAX_SEX];
	char address[MAX_ADDRESS];
	int  age;
}Address_List;

//初始化通讯录 静态版本
//struct Contact {
//	struct Address_List data[MAX];
//	int size;
//};
typedef struct Contact {
	Address_List* data;//存放人员信息
	int size;//记录人员数量
	int capacity;//当前通讯录容量
}Contact;

//初始化通讯录
int InitContact(struct Contact* con);
//添加联系人
int AddContact(struct Contact* con);
//删除
void DelContact(struct Contact* con);
//修改
void ModuleContact(struct Contact* con);
//查找
void SezrchContact(const struct Contact* con);
//显示
void ShowContact(const struct Contact* con);
//排序
void SortContact(struct Contact* con);
//扩容
int CheckCapacity(Contact* con);
//销毁通讯录
void DestroyContact(Contact* con);