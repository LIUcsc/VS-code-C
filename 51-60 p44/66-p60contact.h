
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
//#pragma once
#define DEFAULT_SZ 3 //ͨѶ¼Ĭ�ϴ�С
#define INC_SZ 2 //ͨѶ¼ÿ�����ݵĴ�С
#define MAX 1000
#define MAX_NAME 20
#define MAX_PN 12
#define MAX_SEX 10
#define MAX_ADDRESS 100

//ö�ٳ���
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
//����ͨѶ¼����
typedef struct Address_List {
	char Name[MAX_NAME];
	char PhoneNumber[MAX_PN];
	char sex[MAX_SEX];
	char address[MAX_ADDRESS];
	int  age;
}Address_List;

//��ʼ��ͨѶ¼ ��̬�汾
//struct Contact {
//	struct Address_List data[MAX];
//	int size;
//};
typedef struct Contact {
	Address_List* data;//�����Ա��Ϣ
	int size;//��¼��Ա����
	int capacity;//��ǰͨѶ¼����
}Contact;

//��ʼ��ͨѶ¼
int InitContact(struct Contact* con);
//�����ϵ��
int AddContact(struct Contact* con);
//ɾ��
void DelContact(struct Contact* con);
//�޸�
void ModuleContact(struct Contact* con);
//����
void SezrchContact(const struct Contact* con);
//��ʾ
void ShowContact(const struct Contact* con);
//����
void SortContact(struct Contact* con);
//����
int CheckCapacity(Contact* con);
//����ͨѶ¼
void DestroyContact(Contact* con);