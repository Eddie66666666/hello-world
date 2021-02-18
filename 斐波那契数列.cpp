#include <stdio.h>
//先用函数的递归写出斐波那契数列
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
//在用是否写一个判断素数的函数，会用到一什么什么就句式 
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
	printf("请输入一个数字：");
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
