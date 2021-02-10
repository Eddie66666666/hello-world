//输入一个数字，将其翻转后输出
//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int num=0;
//	int sum=0;
//	scanf("%d",&n);
//	while(n)
//	{
//		num=n%10;
//		sum=10*sum+num;
//		n/=10;
//	}
//	printf("%d",sum);
//	
//	return 0;
//} 
//面对奇数偶数输出不同的值
//#include <stdio.h>
//float function(int n)
//{
//	if(n%2==0)
//	{
//		float i=0;
//     	float sum=0;
//		for(i=2;i<=n;i+=2)
//		{
//			sum+=1/i;
//		}
//		return sum;
//	}
//	else
//	{
//		float i=0;
//		float sum=0;
//		for(i=1;i<=n;i+=2)
//		{
//			sum+=1/i;
//		}
//		return sum; 
//	}
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	float a=0;
//	a=function(n);
//	printf("%f",a);
//	
//	return 0;
//} 

//练习使用指针的指针
//#include <stdio.h>
//int main()
//{
//	const char *p[]={"liu","jun","sum","wu","chen","yang"};
//	const char **s;
//	int i=0;
//	for(i=0;i<6;i++)
//	{
//		s=&p[i];
//		printf("%s\n",*s);
//	}
//	
//	
//	
//	return 0;
//} 
//结构体问题，输出年纪最大的人
//#include <stdio.h>
//#define N 4
//struct man{
//	char name[20];
//	int age;
//};
//int main() 
//{
//	struct man person[N]={"li",40,"liu",18,"ni",18,"ye",50};
//	struct man *p,*z;
//	p=z=&person[0];
//	int i=0;
//	int m=0;
//	for(i=0;i<N;i++)
//	{
//		if(m<p->age)
//		{
//			m=p->age;
//			z=p;
//		}
//		p++;
//	}
//	printf("%s %d",z->name,z->age);
//	
//	return 0;
//}















