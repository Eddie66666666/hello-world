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
	//��¼��ǰͨѶ¼�Ĵ�С 
	//����ͨѶ¼
	//����һ��������һǧ���˵���Ϣ 
	struct Contact con;
	//��ʼ��һ��ͨѶ¼ 
	Initcontact(&con);
	do{
		menu();
		printf("��ѡ��>");
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
				//����ͨѶ¼���ͷŶ�̬�ڴ� 
				Destorycontact(&con);
				break;
			case 0:
				//����ͨѶ¼-�ͷſ��ٵĶ�̬�ڴ�
				Destorycontact(&con); 
				printf("�˳�ͨѶ¼\n");
				break;
			default :
				printf("ѡ�����\n");
				break;
		}
	}while(input);
	
	return 0;
}
