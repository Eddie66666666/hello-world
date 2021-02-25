////#include <errno.h>
////#include <string.h>
////#include <stdio.h>
////
//////int main()
//////{
////// 	//绝对路径的写法
//////	//fopen("C:\Users\LIUJUN\Desktop","r");
//////	
//////	
//////	//相对路径的写法 
////// 	FILE* pf = fopen("text.txt","r");
////// 	if(pf==NULL)
////// 	{
////// 		printf("%s\n",strerror(errno));
////// 		return 0;
//////	}
//////	
//////	//打开成功
//////	fclose(pf);
//////	pf = NULL;
//////	 
////// 	return 0;
//////}
//////int main()
//////{
//////	FILE* pfRead=fopen("TEXT.txt","r");
//////	if(pfRead==NULL)
//////	{
//////		return 0;
//////	}
//////	else 
//////	{
//////		printf("%s\n",strerror(errno));
//////	}
//////	
////////	fputc('b',pfRead);
////////	fputc('i',pfRead);
////////	fputc('t',pfRead);
//////	
//////	//读文件
//////	printf("%c",fgetc(pfRead));
//////	printf("%c",fgetc(pfRead));
//////	printf("%c",fgetc(pfRead));
//////	
//////	fclose(pfRead);
//////	pfRead=NULL;
//////	
//////	
//////	
//////	return 0;
//////}
////
////
////int main()
////{
////	FILE* pf=fopen("test.txt","r");
////	if(pf==NULL)
////	{
////		printf("%s\n",strerror(errno));
////		return 0;
////			
////	}
////
////	int ch=fgetc(pf);
////	printf("%c\n",ch);
////	ch=fgetc(pf);
////	printf("%c\n",ch);
////	ch=fgetc(pf);
////	printf("%c\n",ch);
////	
//////	fputc('b',pf);
//////	fputc('i',pf);
//////	fputc('t',pf);
//////	
////	
////	
////	fclose(pf);
////	pf=NULL;
////	
////	
////	return 0;
////}
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	char buf[1024]={0};
//	FILE* pf=fopen("text.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	
//	fputs("liujun",pf);
//	fputs("jiayou",pf);
//	
//	fclose(pf);
//	pf=NULL;
//	
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <error.h>
int main()
{
	char arr[1024];
	FILE*　 
	
	return 0;
} 
