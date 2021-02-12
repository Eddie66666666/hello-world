//×Ö·û´®ÅÅÐò
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
void swap(char a[],char b[])
{
	char tmp[20]={0};
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
	
}
int main()
{
	char a[20]={0};
	char b[20]={0};
	char c[20]={0};
	printf("Please enter three ×Ö·û´®");
	gets(a);
	gets(b);
	gets(c);
	if(strcmp(a,b))
	{
		swap(a,b);
	}
	if(strcmp(b,c))
	{
		swap(b,c);
	}
	if(strcmp(a,b))
	{
		swap(a,b);
	}
	printf("µ÷ÕûºóµÄ×´Ì¬ÊÇ£º");
	printf("%s %s %s",a,b,c); 
	return 0;
} 
