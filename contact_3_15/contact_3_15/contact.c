
#include"contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	pc->capicity = 2;
	struct PeoInfo* p = (struct PeoInfo*)malloc(sizeof(struct PeoInfo) * 2);
	if (p == NULL)
	{
		printf("初始化失败\n");
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
			printf("扩容失败\n");
			return;
		}
		else
		{
			pc->date = ptr;
			pc->capicity += 2;
			printf("扩容成功\n");
		}
	}
	printf("请输入姓名：");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入性别：");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入年龄：");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("请输入电话号码：");
	scanf("%s", pc->date[pc->sz].tele);
	pc->sz++;
	printf("添加成功\n");
}

void ShowContact(Contact* pc)
{
	printf("%s\t%s\t%s\t%s\n", "姓名", "性别", "年龄", "电话");
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



