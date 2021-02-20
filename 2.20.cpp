//#include <stdio.h>
//
//struct S{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct S* ps=(struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n=100;
//	int i=0;
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i]=i;//1 2 3 4 
//	}
//	struct S* ptr=realloc(ps,44);
//	if(ptr!=NULL)
//	{
//		ps=str;
//	}
//	for(i=0;i<10;i++)
//	{
//	    ptr->arr[i]=i;
//	    printf("%d",arr[i]);
//	}
//	free(ptr);
//	ptr=NULL;
//	
//	
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
struct S{
	int n;
	int* arr;
	//char* k;
};

int main()
{
	struct S* ps=(struct S*)malloc(sizeof(struct S));
	int i=0;
	ps->arr=(int*)malloc(sizeof(20*sizeof(int)));
	ps->arr=(int*)realloc(ps->arr,40*(sizeof(int)));
	if(ps!=NULL)
	{
		for(i=0;i<10;i++)
	{
		ps->arr[i]=i;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d",ps->arr[i]);
	}
	}
	free(ps);
	ps=NULL;
	free(ps->arr);
	ps->arr=NULL;
	return 0;
}
