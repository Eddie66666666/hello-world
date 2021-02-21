//#include <stdio.h>
//#include <stdlib.h>
//struct S{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* str;
//	//printf("Ò»Æð¼ÓÓÍ\n");
//	//printf("%d\n",sizeof(struct S));
//	str=(struct S* )malloc(sizeof(struct S)+10*sizeof(int));
//	str->n=100;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		str->arr[i]=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",str->arr[i]);
//	}
//	free(str);
//	str=NULL;
//	
//	return 0;
//}
#include <stdlib.h>
#include <stdio.h>
struct S{
	int n;
	int* arr;
	
};
int main()
{
	struct S* p=(struct S*)malloc(sizeof(struct S));
	p->arr=(int*)malloc(sizeof(struct S)+10*sizeof(int));
	p->n=100;
	int i=0;
	for(i=0;i<10;i++)
	{
		p->arr[i]=i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",p->arr[i]);
	}
	free(p);
	p=NULL;
	free(p->arr);
	p->arr=NULL;
	return 0;
}
