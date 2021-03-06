//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//


//int main()
//{
//	FILE* pf=fopen("text.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	} 
//	//1.定位文件指针 
//	//fseek(pf,-2,SEEK_END);
//	//2.读取文件
//	//int ch=fgetc(pf);
//	//printf("%c\n",ch); \
//	//ftell函数返回文件指针相对起始指针的偏移量 
//	//int pos=ftell(pf);
//	//printf("%d\n",pos);
//	//rewind让函数回到起始位置
//	int ch=fgetc(pf);
//	printf("%c\n",ch);
//	rewind(pf);
//	ch=fgetc(pf);
//	printf("%c\n",ch);
//	
//	fclose(pf);
//	pf=NULL;
//	
//	
//	return 0;
//} 


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pf=fopen("text.txt","r");
//	if(pf==NULL) 
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	int pos=fgetc(pf);
//	printf("%d\n",pos);
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
//
//int main() 
//{
//	FILE* pf=fopen("Text2.txt","r");
//	if(pf==NULL)
//	{
//		perror("FILE opening failed");
//		return 0;
//	} 
//	
//	
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf=fopen("text.txt","r");
	if(pf==NULL) 
	{
		perror("FILE opening failed");
		return 0;
	}
	int ch=0;
	
    while((ch=fgetc(pf))!=EOF)
    {
    	putchar(ch);
	}
	if(ferror(pf))
	{
		printf("errno\n");
	}
	else if(feof(pf))
	{
		printf("end of the file\n");
	}
	
	fclose(pf);
	pf=NULL;
	
	
	return 0;
}
