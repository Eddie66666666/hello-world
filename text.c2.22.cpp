#define _CRT_SECRUE_NO_WARRINGS 1
#include <iostream>
#include "contact.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	
	printf("*************************\n");
	printf("***1.add       2.del*****\n");
	printf("**3.search     4.modify**\n");
	printf("***5.show      6.sort****\n");
	printf("***7.save      0.exit****\n");
	printf("*************************\n");
	printf("*************************\n");
	printf("*************************\n");
	printf("*************************\n");
	printf("*************************\n");
}

int main(int argc, char** argv) {
	int input=0;
	//记录当前通讯录的大小 
	//创建通讯录
	//创建一个数组存放一千个人的信息 
	struct Contact con;
	//初始化一下通讯录 
	Initcontact(&con);
	do{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				Addcontact(&con);
				//Showcontact(&con);
				break;
			case 2:
				Delcontact(&con);
				break;
			case 3:
				Searchcontact(&con);
				break;
			case 4:
				Modifycontact(&con);
				break;
			case 5:
				Showcontact(&con);
				break;
			case 6:
				break;
			case 7:
				Savecontact(&con);
				//销毁通讯录，释放动态内存 
				Destorycontact(&con);
				break;
			case 0:
				//销毁通讯录-释放开辟的动态内存
				Destorycontact(&con); 
				printf("退出通讯录\n");
				break;
			default :
				printf("选择错误\n");
				break;
		}
	}while(input);
	
	return 0;
}
