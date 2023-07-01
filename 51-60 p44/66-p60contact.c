
#include "66-p60contact.h"



//��ʼ��ͨѶ¼ ��̬��
//void InitContact(struct Contact* con) 
//{
//	//�����ڴ�
//	//�⺯�� void *memset(void *str, int c, size_t n) �����ַ� c��һ���޷����ַ��������� str ��ָ����ַ�����ǰ n ���ַ���
//	memset(con->data, 0, sizeof(con->data));
//	con->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
//}


//��ʼ��ͨѶ¼ ��̬��
int InitContact(struct Contact* con)
{
	assert(con);
	//��̬�����ڴ�
	con->data = (Address_List*)calloc(DEFAULT_SZ, sizeof(Address_List));
	if (con->data == NULL) {
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	con->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
	con->capacity = DEFAULT_SZ;
	return 0;
}


//ͨ�ò��Һ���  �����Ⱪ¶
static int General_Sezrch(const struct Contact* con, char name[]) {
	int i;
	for (i = 0; i < con->size; i++) {
		if (strcmp(name, con->data[i].Name) == 0) {
			return i;//�ҵ��˷����±�
		}
	}
	return -1;//û�ҵ�����-1
}

//�����ϵ��  ��̬
//void AddContact(struct Contact* con) 
//{
//	if (con->size == MAX) {
//		printf("����");
//	}
//	else {
//		printf("��������");
//		scanf("%s", con->data[con->size].Name);
//		printf("����绰����");
//		scanf("%s", con->data[con->size].PhoneNumber);
//		printf("�����Ա�");
//		scanf("%s", con->data[con->size].sex);
//		printf("����סַ");
//		scanf("%s", con->data[con->size].address);
//		printf("��������");
//		scanf("%d", &(con->data[con->size].age));
//		con->size++;
//	}
//	
//}
//�����ϵ��  ��̬
int AddContact(struct Contact* con)
{
	assert(con);//����������Ч��
	
	//����Ƿ���Ҫ����
	if (con->size==con->capacity) {
		CheckCapacity(con);//ͨѶ¼����
	}
	printf("��������");
	scanf("%s", con->data[con->size].Name);
	printf("����绰����");
	scanf("%s", con->data[con->size].PhoneNumber);
	printf("�����Ա�");
	scanf("%s", con->data[con->size].sex);
	printf("����סַ");
	scanf("%s", con->data[con->size].address);
	printf("��������");
	scanf("%d", &(con->data[con->size].age));
	con->size++;
	return 0;

}

//����
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


//��ʾ
void ShowContact(const struct Contact* con){
	int i;

		 
	//printf("����          �绰����          ����         �Ա�        סַ\n");
	printf("%-5s\t%-12s\t%-2s\t%-1s\t%-20s\n","����","�绰����","����","�Ա�","סַ");
	if (con->size==0) {
		printf("��\n");
	}
	else {
		for (i = 0; i < con->size; i++) {
			//�����������
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

//ɾ��
void DelContact(struct Contact* con) {
	char input[MAX_NAME] = "";
	int i = 0,n;
	printf("��������Ҫɾ��������>>");
	scanf("%s", input);
	i = General_Sezrch(con, input);
	if (i>=0) {
		//ɾ������
		for (n = i; n < con->size - 1; n++) {
			con->data[n] = con->data[n + 1];
		}
		con->size--;
		printf("ɾ�����\n");
	}
	else {
		
		printf("û�ҵ���Ҫɾ������\n");
	}
	

}

//����
void SezrchContact(const struct Contact* con) {
	char name[MAX_NAME] = "";
	int i;
	printf("��������>>");
	scanf("%s", name);
	
	i = General_Sezrch(con,name);
	
	if (i >= 0) {
		printf("%-5s\t%-12s\t%-2s\t%-1s\t%-20s\n", "����", "�绰����", "����", "�Ա�", "סַ");
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
		printf("û�ҵ�\n");
	}
}
//�޸�
void ModuleContact(struct Contact* con) {
	char name[MAX_NAME] = "";
	int i;
	printf("�����޸�������>>");
	scanf("%s", name);
	i = General_Sezrch(con, name);
	if (i==-1) {
		printf("û�ҵ���Ҫ�޸ĵ�ֵ\n");
	}
	else {
		printf("��������");
		scanf("%s", con->data[i].Name);
		printf("����绰����");
		scanf("%s", con->data[i].PhoneNumber);
		printf("�����Ա�");
		scanf("%s", con->data[i].sex);
		printf("����סַ");
		scanf("%s", con->data[i].address);
		printf("��������");
		scanf("%d", &(con->data[i].age));
		printf("�޸����\n");
		printf("%-5s\t%-12s\t%-2s\t%-1s\t%-20s\n", "����", "�绰����", "����", "�Ա�", "סַ");
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
//����
void SortContact(struct Contact* con) {
	//printf("δ���\n");
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
	printf("�������\n");
	

}


//����ͨѶ¼
void DestroyContact(Contact* con) {
	assert(con);
	free(con->data);
	con->data = NULL;
}
