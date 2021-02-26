////应用属于自己的strstr函数
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char *a1,const char *a2)
//{
//	assert(a1 && a2);
//	assert(a1!=NULL);
//	assert(a2!=NULL);
//	char *s1=NULL;
//	char *s2=NULL;
//	char *cur=NULL;
//	cur=(char*)a1;
//	//特殊情况，率先排除 
//	if(*a2=='\0')
//	{
//		return (char*)a1;
//	}
//	while(*cur)
//	{
//		//请记住我，以后的日子可以重新来过 
//		s1=cur;
//		s2=(char*)a2;//记住a2的位置 
//	while(*s1 && *s2 &&(*s1==*s2))
//	{
//		//我将要去远方 
//		s1++;
//		s2++;
//	}
//	if(*s2=='\0')
//	{
//		return cur;
//	}
//	cur++;
//	} 
//	return NULL;//找不到子串 
//	
//}
//int main()
//{
//	char a1[]="abcdefgh";
//	char a2[]="def";
//	char *p=my_strstr(a1,a2);
//	if(p==NULL)
//	{
//		printf("不存在\n");
//	}
//	else printf("%s\n",p);
//	return 0;
//} 




//实现属于自己的strstr函数 
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char *a1,const char *a2)
{
	assert(a1!=NULL);
	assert(a2!=NULL);
	char *s1=NULL;
	char *s2=NULL;
	char *cur=NULL;
	s1=(char*)a1;
	s2=(char*)a2;
	cur=(char*)a1;
	if(*a2=='\0')
	{
		return (char*)a1;
	}
	while(*cur)
	{
		s1=cur;
		s2=(char *)a2;
		while(*s1 && *s2 && (*s1==*s2))
		{
			s1++;
			s2++;
		} 

		if(*s2=='\0')
		{
			return cur;
		}
		if(*s1=='\0')
		{
			return NULL;
		}

		cur++;
	}
	return NULL;
}
int main()
{
	char a1[]="abcdefgh";
	char a2[]="defgh";
	char *p=my_strstr(a1,a2);
	if(p==NULL)
	{
		printf("到不了\n");
	}
	else printf("%s\n",p);
	return 0;
}



/* 
核心代码是找到共同字符开始向后便利，若a2到达\0则返回a1的地址
有特殊情况
1、a2为空字符串
2.需要返回，因此创建两个移动指针，和两个固定位置指针
 


*/




while(cur)
{
	s1=cur;
	s2=(char*a2);
	while(s1&&s2&&(s1==s2))
	{
		s1++;
		s2++;
	}
	if(s2=='\0')
	{
		return cur;
	}
	if(s1=='\0')
	{
		return NULL;
	}
	cur++;
}
return NULL;














