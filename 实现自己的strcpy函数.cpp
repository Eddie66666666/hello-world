///*
//实现自己的strcpy函数 
//*/
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char *a1,const char *a2)
//{
//	assert(a1!=NULL);
//	assert(a2!=NULL);
//	char* key=a1;
//	while(*a1++=*a2++)
//	{
//		;
//	}
//	return a1;
//} 
//
//int main()
//{
//	char a1[]="abcdefg";
//	char a2[]="abcd";
//	my_strcpy(a1,a2);
//	printf("%s\n",a1);
//}
//实现自己的strcpy函数 
#include <stdio.h>
char* my_strcpy(char *a1,const char *a2)
{
	char *tmp=a1;
	while(*a1++=*a2++)
	{
		;
	}
	return tmp;
}

int main()
{
	char a1[]="abcdefg";
	char a2[]="abcdegrh";
	my_strcpy(a1,a2);
	printf("%s\n",a1);
} 


//char* my_strcpy(char *a1,const char *a2)
//{
//	char *key=a1;
//	while(*a1++=*a2++)
//	{
//		;
//	}
//	return key; 
//}
//
































