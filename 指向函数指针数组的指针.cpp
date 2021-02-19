#include <stdio.h>
int Add(int x,int y)
{
	return x+y;	
}

int main()
{
	int a[10]={0};
	int (*p)[10]=&a;//取出数组的地址 
	//把名字换成一个*p 
	int (*pfArr[4])(int ,int);//函数指针的数组 pfArr是一个数组，函数指针的数组
	int (*(*ppfArr)[4])(int ,int)=&pfArr; //把一个名字换成*ppfArr 
	//ppfArr是一个指针，指针指向一个数组，数组里有四个元素，元素是函数指针
	
	
	return 0;
}
int Add(int x,int y)
{
	return x+y;
}
int main()
{
	int a[10]={0};
	int (*p)[10]=&a;
	int (*pfArr[4])(int ,int);
	
	return 0;
}



void print(char *str)
{
	printf("hehe:%s",str);
}

void test(void (*p)(*str))
{
	printf("text");
	p("bit");
}





int main()
{
	test(print);
	
	return 0;
}
