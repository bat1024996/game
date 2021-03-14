
#include"calender.h"

void menu()
{
	printf("*******************************\n");
	printf("*****  0. Exit   1. Show  *****\n");
	printf("*******************************\n");
}
int main()
{
	int year = BASEYEAR;
	int month = JAN;
	int input = 0;
	do
	{
		menu();
		printf("请选择>>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出万年历\n");
			break;
		case 1:
			printf("请输入年和月>>\n");
			scanf("%d%d", &year, &month);
			ShowCalender(year, month);
			break;
		default: 
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}