#define _CRT_SECRUE_NO_WARRINGS 1
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30 
//个人信息 
#include <stdio.h>
#include <string.h>
struct PeoInfo{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	
};

struct Contact{
	struct PeoInfo data[MAX];
	int size;
	
};

//声明函数
void Initcontact(struct Contact* ps);
void Addcontact(struct Contact* ps);
void Showcontact(const struct Contact* ps);

