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
//	//��ʽ����д�ļ� 
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


//sscanf and sprintf����
//printfʵ�����ǽ����뵽һ���ط� ����ط���������Ļ Ҳ������һ���ļ� Ҳ������һ���ṹ��
//scanfʵ�����ǵõ�һЩԪ�� �����ǴӼ����� �����Ǵ��ļ��� �����Ǵӽṹ����

 
