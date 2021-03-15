
#include"contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	pc->capicity = 2;
	struct PeoInfo* p = (struct PeoInfo*)malloc(sizeof(struct PeoInfo) * 2);
	if (p == NULL)
	{
		printf("��ʼ��ʧ��\n");
		return;
	}
	else
		pc->date = p;
}

void AddContact(Contact* pc)
{
	if (pc->capicity == pc->sz)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->date, sizeof(struct PeoInfo) * 2);
		if (ptr == NULL)
		{
			printf("����ʧ��\n");
			return;
		}
		else
		{
			pc->date = ptr;
			pc->capicity += 2;
			printf("���ݳɹ�\n");
		}
	}
	printf("������������");
	scanf("%s", pc->date[pc->sz].name);
	printf("�������Ա�");
	scanf("%s", pc->date[pc->sz].sex);
	printf("���������䣺");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("������绰���룺");
	scanf("%s", pc->date[pc->sz].tele);
	pc->sz++;
	printf("��ӳɹ�\n");
}

void ShowContact(Contact* pc)
{
	printf("%s\t%s\t%s\t%s\n", "����", "�Ա�", "����", "�绰");
	int i=0;
	for (i = 0; i < pc->sz;i++)
	{
		printf("%s\t%s\t%d\t%s\n",
			pc->date[i].name,                
			pc->date[i].sex,
			pc->date[i].age,
			pc->date[i].tele
			);
	}
}



