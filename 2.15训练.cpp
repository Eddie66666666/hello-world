//�ж�һ�������ܱ�����9��ɵ�������
#include <stdio.h>
int main()
{
	int Isprime(int n);
	int n=0;
	printf("������һ��������"); 
	scanf("%d",&n);
	while(!Isprime(n))
	{
		printf("�������������һ��������");
		scanf("%d",&n); 
	}
	int k=9;
	int sum=k;
    while(sum%n!=0)
    {
    	sum=sum*10+9;
	}
	printf("%d�ܹ�����%d",n,sum);
	
	
	
	return 0;
} 
int Isprime(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else if(n==3)
	{
		return 1;
	}
	else
	{
		int i=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
���������ַ���
#include <stdio.h>
#include <string.h>
int main()
{
	char* my_strcat(char* a,const char* b);
	char a[20]={0};
	char b[20]={0};
	char* c;
	printf("�����������ַ�����");
	gets(a);
	gets(b);
	my_strcat(a,b);
	printf("���Ӻ���ַ�����:");
	puts(a);
	printf("%s\n",a);
	return 0;
} 
char* my_strcat(char*a,const char*b)
{
	while(*a!='\0')
	{
		a++;
	}
	while(*a++=*b++);
	{
		;
	}
	return a;
}

