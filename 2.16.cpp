#include <stdio.h>
struct text{
	char* a;
	int b;
};
int main()
{
	struct text liujun;
	char string[]="每一天都要加油";
	
	liujun.a=string;
	liujun.b=666;
	
	printf("%s %d",liujun.a,liujun.b);
	
	
	return 0;
}

寻找子串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[20]={0};
	char b[20]={0};
	printf("请输入两个字符串，一个母串，一个子串");
	gets(a);
	gets(b);
	int n1=strlen(a);
	int n2=strlen(b);
	int i=0;
	int j=0;
	int k=0;
	int sum=0;
	int count=0;
	for(i=0;i<=n1-n2;i++)
	{
		for(j=i,k=0;a[j]==b[k]&&k<n2;j++,k++)
		{
			;
		}
		if(k==n2)
		{
			count++;
		}
	} 
	
	printf("共有%d个子式",count);
	
	return 0;
} 



#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE*fp=NULL;
	char filename[25];
	char ch;
	printf("请输入你要保存到的文件的名称：\n");
	gets(filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("error: cannot open file!\n");
		exit(0);
	}
	printf("现在你可以输入一些你要保存的字符，以#结束");
	getchar();
	while((ch=getchar())!='#')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	system("pause");
	return 0;
}
