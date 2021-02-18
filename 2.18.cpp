#include <stdio.h>
typedef struct{
	char number[20];
	int math;
	int English;
	int C;
	int age;
	int average;
	char name[20];
}Stu;

int main()
{
	Stu stu[5];
	int i=0;
	printf("请输入五位同学的信息:");
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d %d %d %d %s",&stu[i].number,&stu[i].math,&stu[i].English,&stu[i].C,&stu[i].age);
		stu[i].average=(stu[i].math+stu[i].C+stu[i].English)/3;
	}
	
	
	printf("还差的远呢");
	return 0;
}

