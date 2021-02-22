#include "contact.h"
#define _CRT_SECRUE_NO_WARRINGS 1
//声明函数
void Initcontact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;
} 
void Addcontact(struct Contact* ps)
{
    if(ps->size==MAX)
 	{
 		printf("通讯录已满，无法增加");
	}
	else
	{
	 	printf("请输入名字:>");
	 	scanf("%s",ps->data[ps->size].name); 
	 	printf("请输入年龄:>");
	 	scanf("%d",&ps->data[ps->size].age);
	 	printf("请输入性别:>");
	 	scanf("%s",ps->data[ps->size].sex);
	 	printf("请输入电话:>");
	 	scanf("%s",ps->data[ps->size].tele);
	 	printf("请输入地址:>");
	 	scanf("%s",ps->data[ps->size].addr);
	 	ps->size++;
	 	
		printf("添加成功\n"); 

	}
}

void Showcontact(const struct Contact* ps)
{
	
	if(ps->size==0)
	{
		printf("通讯录为空\n");
	}
	else 
	{
		int i=0;
		printf("%s %s %s %s %s\n","名字","年龄","性别","电话","地址");
		for(i=0;i<ps->size;i++)
		{
		    printf("%s %d %s %s %s\n", ps->data[i].name,ps->data[i].age,ps->data[i].sex,ps->data[i].tele,ps->data[i].addr);
		}
	}
}

