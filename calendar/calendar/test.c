
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
		printf("��ѡ��>>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�������\n");
			break;
		case 1:
			printf("�����������>>\n");
			scanf("%d%d", &year, &month);
			ShowCalender(year, month);
			break;
		default: 
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}