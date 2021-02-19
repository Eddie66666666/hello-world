#include <stdio.h>
#include <string.h>
int main()
{
	char a[10][20];
	char str[21];
	int n;
	int i=0;
	int j=0;
	int t=0;
	scanf("%d",&n);
	for(t=0;t<n;t++)
	{
		scanf("%s",&a[t]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(a[i],a[i+1])<0)
			{
				strcpy(str,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],str);
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%s\n",a[i]);
		printf("\n");
	}
	return 0;
}
