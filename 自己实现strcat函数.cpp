#include <stdio.h>
#include <assert.h>

char* my_strcat(char *a1,const char *a2)
{
	//Ѱ��Ŀ���ַ����е�\0 
	while(*a1!='\0')
	{
		a1++;
	}
	//�൱��ʹ��strcpy���� 
	while(*a1++=*a2++)
	{
		;
	} 
	return a1;
}

int main()
{
	char a1[30]="abcdefg";
	char a2[]="abc";
	my_strcat(a1,a2);
	printf("%s\n",a1);
	return 0;
}
//int main()
//{
//	
//	int i=0;
//	int z=10;
//	while(z>0)
//	{
//		i++;
//		z--;
//		printf("%d\n",i);
//	}
//	printf("%d\n",i);
//}
