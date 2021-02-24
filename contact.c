#include "contact.h"
#define _CRT_SECRUE_NO_WARRINGS 1

//声明函数
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
		//增容 
		struct PeoInfo* ptr =(struct PeoInfo*)realloc(ps->data,(ps->capacity+2)*sizeof(struct PeoInfo));
		if(ptr!=NULL)
		{
			ps->data=ptr;
			ps->capacity+=2;
			printf("增容成功\n");
			
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void Addcontact(struct Contact* ps)
{
	//检测当前通讯录含量
	CheckCapacity(ps);
	//如果不满，啥事都不干
	//增加数据
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
//    if(ps->size==MAX)
// 	{
// 		printf("通讯录已满，无法增加");
//	}
//	else
//	{
//	 	printf("请输入名字:>");
//	 	scanf("%s",ps->data[ps->size].name); 
//	 	printf("请输入年龄:>");
//	 	scanf("%d",&ps->data[ps->size].age);
//	 	printf("请输入性别:>");
//	 	scanf("%s",ps->data[ps->size].sex);
//	 	printf("请输入电话:>");
//	 	scanf("%s",ps->data[ps->size].tele);
//	 	printf("请输入地址:>");
//	 	scanf("%s",ps->data[ps->size].addr);
//	 	ps->size++;
//	 	
//		printf("添加成功\n"); 
//
//	}
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
		printf("%5s %5s %5s %5s %5s\n","名字","年龄","性别","电话","地址");
		for(i=0;i<ps->size;i++)
		{
		    printf("%5s %5d %5s %5s %5s\n", ps->data[i].name,ps->data[i].age,ps->data[i].sex,ps->data[i].tele,ps->data[i].addr);
		}
	}
}

void Delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:\n");
	scanf("%s",name);
	//查找要删除的人的下标
	int pos=FindByName(ps,name);
	if(pos==-1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j=0;
		for(j=pos;j<ps->size-1;j++)
		{
			ps->data[j]=ps->data[j+1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void Searchcontact(struct Contact* ps)
{
	printf("请输入想要查找人的名字:");
	char name[MAX_NAME]; 
	scanf("%s",name);
    int pos=FindByName(ps,name);
    if(pos==-1)
    {
    	printf("要查找的人不存在：\n");
	}
	else
	{
		printf("%s %s %s %s %s\n","名字","年龄","性别","电话","地址");
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
	printf("请输入要修改的名字：");
	scanf("%s",name);
	int pos=FindByName(ps,name);
	if(pos==-1)
	{
		printf("没有你要修改的名字：");
	}
	else 
	{
		printf("请输入名字:>");
	 	scanf("%s",ps->data[pos].name); 
	 	printf("请输入年龄:>");
	 	scanf("%d",&ps->data[pos].age);
	 	printf("请输入性别:>");
	 	scanf("%s",ps->data[pos].sex);
	 	printf("请输入电话:>");
	 	scanf("%s",ps->data[pos].tele);
	 	printf("请输入地址:>");
	 	scanf("%s",ps->data[pos].addr);
	 	printf("输入完毕\n");	
	}
}


void Destorycontact(struct Contact* ps)
{
	free(ps->data);
	ps->data=NULL;
	
} 
