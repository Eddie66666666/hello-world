#include <stdio.h>
struct text{
	char* a;
	int b;
};
int main()
{
	struct text liujun;
	char string[]="ÿһ�춼Ҫ����";
	
	liujun.a=string;
	liujun.b=666;
	
	printf("%s %d",liujun.a,liujun.b);
	
	
	return 0;
}

Ѱ���Ӵ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[20]={0};
	char b[20]={0};
	printf("�����������ַ�����һ��ĸ����һ���Ӵ�");
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
	
	printf("����%d����ʽ",count);
	
	return 0;
} 



#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE*fp=NULL;
	char filename[25];
	char ch;
	printf("��������Ҫ���浽���ļ������ƣ�\n");
	gets(filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("error: cannot open file!\n");
		exit(0);
	}
	printf("�������������һЩ��Ҫ������ַ�����#����");
	getchar();
	while((ch=getchar())!='#')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	system("pause");
	return 0;
}
