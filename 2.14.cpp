#include <stdio.h>
int isprime(int n);

int main()
{
	int k=0;
    printf("请输入一个数字:");
	scanf("%d",&k); 
	while(k%2!=0)
	{
		printf("输入错误，请重新输入");
		scanf("%d",&k);
	}
	int j=1;
	for(j=1;j<k-1;j++)
	{
		if(isprime(j)==1&&isprime(k-j)==1)
		{
			break;
		}
	}
	printf("%d这个数字可以分为%d 和 %d",k,j,k-j);
	
	
	return 0;
 
}

int isprime(unsigned int n)
{
	int i=1;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
		else if(n==2)
		{
			return 1;
		}
		else if(n==0)
		{
			return 0;
		}
		else if(n==1)
		{
			return 0;
		}
	}
	return 1;
} 

