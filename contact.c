#include "contact.h"
#define _CRT_SECRUE_NO_WARRINGS 1

//��������
static int FindByName(struct Contact* ps,char name[MAX_NAME])
{
	int i=0;
	for(i=0;i<ps->size;i++)
	{
		if(0==strcmp(name,ps->data[i].name))
		{
			return i;
		}
	}
	return -1;
}

void Initcontact(struct Contact* ps)
{
    ps->data=(struct PeoInfo*)malloc(DEFAULT_SZ*sizeof(struct PeoInfo));
    if(ps->data == NULL)
    {
    	return ;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
} 

void CheckCapacity(struct Contact* ps){
	if(ps->size == ps->capacity)
	{
		//���� 
		struct PeoInfo* ptr =(struct PeoInfo*)realloc(ps->data,(ps->capacity+2)*sizeof(struct PeoInfo));
		if(ptr!=NULL)
		{
			ps->data=ptr;
			ps->capacity+=2;
			printf("���ݳɹ�\n");
			
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void Addcontact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼����
	CheckCapacity(ps);
	//���������ɶ�¶�����
	//��������
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
//    if(ps->size==MAX)
// 	{
// 		printf("ͨѶ¼�������޷�����");
//	}
//	else
//	{
//	 	printf("����������:>");
//	 	scanf("%s",ps->data[ps->size].name); 
//	 	printf("����������:>");
//	 	scanf("%d",&ps->data[ps->size].age);
//	 	printf("�������Ա�:>");
//	 	scanf("%s",ps->data[ps->size].sex);
//	 	printf("������绰:>");
//	 	scanf("%s",ps->data[ps->size].tele);
//	 	printf("�������ַ:>");
//	 	scanf("%s",ps->data[ps->size].addr);
//	 	ps->size++;
//	 	
//		printf("���ӳɹ�\n"); 
//
//	}
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
		printf("%5s %5s %5s %5s %5s\n","����","����","�Ա�","�绰","��ַ");
		for(i=0;i<ps->size;i++)
		{
		    printf("%5s %5d %5s %5s %5s\n", ps->data[i].name,ps->data[i].age,ps->data[i].sex,ps->data[i].tele,ps->data[i].addr);
		}
	}
}

void Delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:\n");
	scanf("%s",name);
	//����Ҫɾ�����˵��±�
	int pos=FindByName(ps,name);
	if(pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j=0;
		for(j=pos;j<ps->size-1;j++)
		{
			ps->data[j]=ps->data[j+1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void Searchcontact(struct Contact* ps)
{
	printf("��������Ҫ�����˵�����:");
	char name[MAX_NAME]; 
	scanf("%s",name);
    int pos=FindByName(ps,name);
    if(pos==-1)
    {
    	printf("Ҫ���ҵ��˲����ڣ�\n");
	}
	else
	{
		printf("%s %s %s %s %s\n","����","����","�Ա�","�绰","��ַ");
		printf("%s %d %s %s %s\n", 
		ps->data[pos].name,
		ps->data[pos].age,
		ps->data[pos].sex,
		ps->data[pos].tele,
		ps->data[pos].addr);
	}
}


void Modifycontact(struct Contact*ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ����֣�");
	scanf("%s",name);
	int pos=FindByName(ps,name);
	if(pos==-1)
	{
		printf("û����Ҫ�޸ĵ����֣�");
	}
	else 
	{
		printf("����������:>");
	 	scanf("%s",ps->data[pos].name); 
	 	printf("����������:>");
	 	scanf("%d",&ps->data[pos].age);
	 	printf("�������Ա�:>");
	 	scanf("%s",ps->data[pos].sex);
	 	printf("������绰:>");
	 	scanf("%s",ps->data[pos].tele);
	 	printf("�������ַ:>");
	 	scanf("%s",ps->data[pos].addr);
	 	printf("�������\n");	
	}
}


void Destorycontact(struct Contact* ps)
{
	free(ps->data);
	ps->data=NULL;
	
} 