#include <stdio.h>
int digitsum(unsigned int n)
{
	if(n>9)
	{
		return digitsum(n/10)+n%10;
	}
	else
	{
		return n;
	}
}
int main()
{
	unsigned int sum=0;
	scanf("%d",&sum);
	int ret=digitsum(sum);
	printf("sum=%d",ret);
	return 0;
}
