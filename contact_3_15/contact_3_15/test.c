
#include"contact.h"

void menu()
{
	printf("**********************************\n");
	printf("**** 1. add      2. del      *****\n");
	printf("**** 3. change   4. show    ******\n");
	printf("**** 5.sort      6.search ********\n");
	printf("*****      0.exit         ********\n");

}

int main()
{
	Contact Con;
	InitContact(&Con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>");
		scanf("%d", &input);
		switch (input)                //�˴����ú���ָ����ʵ��switch�Ĺ���
		{
		case 1:
			AddContact(&Con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			ShowContact(&Con);
			break;
		case 5:
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}	
	} while (input);
	return 0;
}