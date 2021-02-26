#include <stdio.h>
#include <string.h>
//int main()
//{
//	char a[]="198.23.424.57";
//	char *p=".";
//	char *ret=NULL;
//	for(ret=strtok(a,p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

int main()
{
	
	char a[]="abcdn&.jfkandak.udbisc.sdad&dsaddsda.dadfef";
	char *p="&.";
	char *ret=NULL;
	for(ret=strtok(a,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n",ret);
	}
	return 0;
}
