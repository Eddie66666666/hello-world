////��������Ѱ������ 
//#include <stdio.h>
//void output(long int b,long int i);
//int main()
//{
//	long int a,b,i;
//	a=809;
//	for(i=10;i<100;i++)
//	{
//		b=i*a;
//		if(b>=1000&&b<=10000&&8*i<100&&9*i>=100)
//		{
//			output(b,i);
//		}
//	}
//	
//	
//	return 0;
//}
//
//void output(long int b,long int i)
//{
//	printf("\n%ld = 800 * %ld + 9 * %ld\n",b,i,i);
//}
//�˽���ת����ʮ����
//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	char a[20]={0};
//	gets(a);
//	while(a[i]!='\0')
//	{
//		n=n*8+a[i]-'0';
//		i++;
//	}
//	printf("%d",n);
//	
//	
//	
//	return 0;
//} 

#include <stdio.h>
int main()
{
	int j=0;
	int sum=0;
	int s=4;//һλ�����������ĸ�
	for(j=1;j<8;j++)
	{
		if(j==2)
		{
			s*=7;
		}
		else if(j==1)
		{
			;
		}
		else
		{
			s*=8;
		}
		sum+=s;
		printf("%dλ����������%d\n",j,s);
	} 
	printf("�������ܸ�����%d\n",sum);
	
	return 0;
}
