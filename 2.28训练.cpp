//#include <stdio.h>
//#include <string.h>
//#include <errno.h>

//int main()
//{
//	FILE* pfwrite=fopen("text.txt","w");
//	if(pfwrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputc('b',pfwrite);
//	fputc('i',pfwrite);
//	fputc('t',pfwrite);
//    
//    fclose(pfwrite);
//    pfwrite=NULL;
//    
//	
//	return 0;
//}

//int main()
//{
//	FILE* pfread=fopen("text.txt","r");
//	if(pfread==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	
//	printf("%c\n",fgetc(pfread));
//	printf("%c\n",fgetc(pfread));
//	printf("%c\n",fgetc(pfread));
//	
//	fclose(pfread);
//	pfread=NULL;
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>

//int main()
//{
//	FILE* pf=fopen("Text.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputc('f',pf);
//	fputc('i',pf);
//	fputc('t',pf);
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

//int main()
//{
//	char str[1024]={0};
//	FILE* pf=fopen("text.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fgets(str,1024,pf);
//	printf("%s",str);
//	fgets(str,1024,pf);
//	printf("%s",str);
//	fgets(str,1024,pf);
//	printf("%s",str);
//	
//	fclose(pf);
//	pf=NULL;
//	
//	
//	
//	
//	
//	return 0;
//} 


//int main()
//{
//	char buf[1024]={0};
//	fgets(buf,1024,stdin);
//	fputs(buf,stdout);
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
//	char arr[10];
//};
//int main()
//{
//	struct S s={100,3.14f,"keep"};
//	FILE* pf=fopen("text.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//格式化的输出函数 
//	//fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	//格式化的输入函数
//	 
//	fclose(pf);
//	pf=NULL;
//	
//	
//	
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <errno.h>
struct S{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s={0};
	FILE* pf=fopen("text.txt","w");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	}
	//格式化的输入数据
	fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));
	printf("%d %f %s",s.n,s.score,s.arr);
	
	fclose(pf);
	pf=NULL;
	 
	
	
	return 0;
}
