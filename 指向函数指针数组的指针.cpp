#include <stdio.h>
int Add(int x,int y)
{
	return x+y;	
}

int main()
{
	int a[10]={0};
	int (*p)[10]=&a;//ȡ������ĵ�ַ 
	//�����ֻ���һ��*p 
	int (*pfArr[4])(int ,int);//����ָ������� pfArr��һ�����飬����ָ�������
	int (*(*ppfArr)[4])(int ,int)=&pfArr; //��һ�����ֻ���*ppfArr 
	//ppfArr��һ��ָ�룬ָ��ָ��һ�����飬���������ĸ�Ԫ�أ�Ԫ���Ǻ���ָ��
	
	
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
