////Ӧ�������Լ���strstr����
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
//	//��������������ų� 
//	if(*a2=='\0')
//	{
//		return (char*)a1;
//	}
//	while(*cur)
//	{
//		//���ס�ң��Ժ�����ӿ����������� 
//		s1=cur;
//		s2=(char*)a2;//��סa2��λ�� 
//	while(*s1 && *s2 &&(*s1==*s2))
//	{
//		//�ҽ�ҪȥԶ�� 
//		s1++;
//		s2++;
//	}
//	if(*s2=='\0')
//	{
//		return cur;
//	}
//	cur++;
//	} 
//	return NULL;//�Ҳ����Ӵ� 
//	
//}
//int main()
//{
//	char a1[]="abcdefgh";
//	char a2[]="def";
//	char *p=my_strstr(a1,a2);
//	if(p==NULL)
//	{
//		printf("������\n");
//	}
//	else printf("%s\n",p);
//	return 0;
//} 




//ʵ�������Լ���strstr���� 
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
		printf("������\n");
	}
	else printf("%s\n",p);
	return 0;
}



/* 
���Ĵ������ҵ���ͬ�ַ���ʼ����������a2����\0�򷵻�a1�ĵ�ַ
���������
1��a2Ϊ���ַ���
2.��Ҫ���أ���˴��������ƶ�ָ�룬�������̶�λ��ָ��
 


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














