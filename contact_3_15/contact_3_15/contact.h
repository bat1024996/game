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
	int sz;               //ͨѶ¼��ʱ�Ĵ�С
	int capicity;          //ͨѶ¼������
}Contact;



//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//ͨѶ¼����
void AddContact(Contact* pc);

//ͨѶ¼����ʾ
void ShowContact(Contact* pc);