//#include <stdio.h>
//#include <limits.h>
//#include <float.h>
//int main()
//{
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n",INT_MAX);
//	printf("Smallest long long:%lld\n ",LLONG_MIN);
//	printf("One byte =%d bits on this system.\n",CHAR_BIT);
//	printf("Largest double:%e\n",DBL_MAX);
//	printf("Smallest normal float:%e\n",FLT_MIN);
//	printf("float precision = %d digits\n",FLT_DIG);
//	printf("float epsilon = %e\n",FLT_EPSILON);
//	 
//	
//	
//	
//	return 0;
//} 
//#include <stdio.h>
//#define PAGES 959
//int main()
//{
//	printf("*%d*\n",PAGES);
//	printf("*%2d\n*",PAGES);
//	printf("*%10d*\n",PAGES);
//	printf("*%-10d*\n",PAGES);
//	
//	
//	
//	return 0;
//}
//int main()
//{
//	const double RENT =3852.99;
//	
//	printf("*%f*\n",RENT);
//	printf("*%e*\n",RENT);
//	printf("*%4.2f*\n",RENT);
//	printf("*%3.1f*\n",RENT);
//	printf("*%10.3f*\n",RENT);
//	printf("*%10.3e*\n",RENT);
//	printf("*%+4.2f*\n",RENT);
//	printf("*%010.2f*\n",RENT);
//	
//	
//	
//	
//	
//	return 0;
//}
//

//打印长字符串
//int main() 
//{
//	printf("Here is one way to print a:");
//	printf("long string.\n");
//	printf("Here is another way to print a\
//	long string");
//	
//	
//	
//	
//	
//	
//	return 0;
//}
//
//int main()
//{
//	int age;
//	float assets;
//	char pet[30];
//	printf("Enter your age ,assets,and favourite pet.\n");
//	scanf("%d %f",&age,&assets);
//	scanf("%s",pet);
//	printf("%d %f %s",age,assets,pet);
//	
//	
//	return 0;
//}
//

//int main()
//{
//	
//	
//	
//	
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int *p=(int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//	    //*p++=i;
//	    *(p+i)=i;
//	    //应当不能直接调整动态内存地址,不然只清除了一部分 
//	}
//	
//	free(p);
//	p=NULL;
//	
//	return 0;
//}
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p=(int*)malloc(40);
	if(p==NULL)
	{
		return 0;
	}
	free(p);
	//free(p);
	//不能多次释放动态内存空间
	//不能忘记释放动态内存，否则会造成内存泄漏
	 
	return 0;
}







