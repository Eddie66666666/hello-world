#include "contact.h"
#define _CRT_SECRUE_NO_WARRINGS 1
//��������
void Initcontact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;
} 
void Addcontact(struct Contact* ps)
{
    if(ps->size==MAX)
 	{
 		printf("ͨѶ¼�������޷�����");
	}
	else
	{
	 	printf("����������:>");
	 	scanf("%s",ps->data[ps->size].name); 
	 	printf("����������:>");
	 	scanf("%d",&ps->data[ps->size].age);
	 	printf("�������Ա�:>");
	 	scanf("%s",ps->data[ps->size].sex);
	 	printf("������绰:>");
	 	scanf("%s",ps->data[ps->size].tele);
	 	printf("�������ַ:>");
	 	scanf("%s",ps->data[ps->size].addr);
	 	ps->size++;
	 	
		printf("��ӳɹ�\n"); 

	}
}

void Showcontact(const struct Contact* ps)
{
	
	if(ps->size==0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else 
	{
		int i=0;
		printf("%s %s %s %s %s\n","����","����","�Ա�","�绰","��ַ");
		for(i=0;i<ps->size;i++)
		{
		    printf("%s %d %s %s %s\n", ps->data[i].name,ps->data[i].age,ps->data[i].sex,ps->data[i].tele,ps->data[i].addr);
		}
	}
}

