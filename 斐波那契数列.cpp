#include <stdio.h>
//���ú����ĵݹ�д��쳲���������
int feibo(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else if(n>=3)
	{
		return feibo(n-2)+feibo(n-1);
	}
} 
//�����Ƿ�дһ���ж������ĺ��������õ�һʲôʲô�;�ʽ 
int isPrimeNumber(int n)
{
	int i=0,isprime=1;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			isprime=0;
			break;
		}
	}
	return isprime;
} 
int main()
{
	int s;
	printf("������һ�����֣�");
	scanf("%d",&s);
	if(isPrimeNumber(feibo(s)))
	{
		printf("yes");
	}
	else 
	{
		printf("%d",feibo(s));
	}
	return 0;
}
