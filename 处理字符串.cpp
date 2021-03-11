#include <stdio.h>
#include <string.h>
int main()
{
	char a[101]={0};
	char b[100]={0};
	char c[100]={0};
	gets(a);
	int l=strlen(a); 
	char d=a[0];
	int i=0;
	int m=0;
	int n=0;
	for(i=1;i<l;i++)
	{
		if(a[i]>d)
		{
			b[m++]=a[i];
		}
		else
		{
			c[n++]=a[i];
		}
	}
	//√∞≈›≈≈–Ú∑®
	for(i=0;i<strlen(c);i++)
	{
		for(m=0;m<strlen(c)-i-1;m++)
		{
			if(c[m]>c[m+1])
			{
				char tmp=c[m];
				c[m]=c[m+1];
				c[m+1]=tmp;
			}
		}
	}
	printf("%s%c%s",b,d,c);
	return 0;
}
