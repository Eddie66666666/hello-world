#define _CRT_SECRUE_NO_WARRINGS 1
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20
#define DEFAULT_SZ 3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//enum Option{
//	EXIT;
//	ADD;
//	DEL;
//	SEARCH;
//	MODIFY;
//	SHOW;
//	SORT;
//	
//};
//������Ϣ 
struct PeoInfo{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//�ṹ��洢��Ϣ�͵�ǰͨѶ¼��С 
struct Contact{
	struct PeoInfo *data;
	int size;
	int capacity;//��ǰͨѶ¼��������� 
};
//��������
void Initcontact(struct Contact* ps);
void Addcontact(struct Contact* ps);
void Showcontact(const struct Contact* ps);
void Delcontact(struct Contact* ps);
void Searchcontact(struct Contact* ps);
void Modifycontact(struct Contact* ps);
void CheckCapacity(struct Contact* ps);
void Destorycontact(struct Contact* ps);
//void FindByName(struct Contact* ps);
