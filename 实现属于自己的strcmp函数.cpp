//ÊµÏÖmy_strcmpº¯Êı
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strcmp(const char *a1,const char *a2)
{
	assert(a1 && a2);
	while(*a1==*a2)
	{
		if(*a1=='\0')
		{
			return 0;
		}
		a1++;
		a2++;
	}
	if(*a1>*a2) return 1;
	else return -1;
} 


int main()
{
	char a1[]="abcdefg";
	char a2[]="abcdef";
	int ret=my_strcmp(a1,a2);
	printf("%d\n",ret);
	return 0;
	
} 
