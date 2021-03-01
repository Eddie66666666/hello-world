//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct S{
//	int n;
//	float k;
//	char arr[10];
//};
//int main()
//{
//	struct S s={100,3.14f,"abcdef"};
//	char buf[1024]={0};
//	
//	sprintf(buf,"%d %f %s",s.n,s.k,s.arr);
//	printf("%s\n",buf);
//	
//	
//	
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct S{
//	int n;
//	float score;
//	char arr[20];
//};
//int main()
//{
//	struct S s={100, 3.14f ,"day day up"};
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%S\n",strerror(errno));
//		return 0;
//	}
//	
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	
//	fclose(pf);
//	pf=NULL;
//	
//	
//	
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct S{
//	int n;
//	float score;
//	char arr[20];
//};
//int main()
//{
//	struct S s={0};
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	printf("%d %f %s",s.n,s.score,s.arr);
//	
//	fclose(pf);
//	pf=NULL;
//	 
//	
//	
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct S{
//	int n;
//	float score;
//	char arr[20];
//	
//};
//int main()
//{
//	struct S s={
//		100,
//		3.14f,
//		"bit"
//	};
//	
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//格式化的写文件 
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	
//	fclose(pf);
//	pf=NULL;
//	
//	
//	
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct S{
//	int n;
//	float k;
//	char arr[20];
//};
//int main()
//{
//	struct S s{0};
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	
//	fscanf(pf,"%d %f %s",&(s.n),&(s.k),&(s.arr));
//	printf("%d %f %s",s.n,s.k,s.arr);
//	
//	return 0;
//}


//sscanf and sprintf函数
//printf实际上是将放入到一个地方 这个地方可以是屏幕 也可以是一个文件 也可以是一个结构体
//scanf实际上是得到一些元素 可以是从键盘上 可以是从文件中 可以是从结构体中

 
