#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

struct PeoInfo
{
	char name[10];
	char sex[6];
	int age;
	char tele[15];
};

typedef struct contact
{
	struct PeoInfo *date;
	int sz;               //通讯录此时的大小
	int capicity;          //通讯录的容量
}Contact;



//初始化通讯录
void InitContact(Contact* pc);

//通讯录增加
void AddContact(Contact* pc);

//通讯录的显示
void ShowContact(Contact* pc);