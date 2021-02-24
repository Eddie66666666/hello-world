#include <stdio.h>


int main()
{
	int a=10000;
	FILE* pf=fopen("text.txt","wb");
	fwrite(&a,4,1,pf);
	fclose(pf);
	pf=NULL;
	return 0;
}
