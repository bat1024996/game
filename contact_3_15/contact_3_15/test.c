
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
		printf("请选择>>");
		scanf("%d", &input);
		switch (input)                //此处可用函数指针来实现switch的功能
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
			printf("已退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}	
	} while (input);
	return 0;
}