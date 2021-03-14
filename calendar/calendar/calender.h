#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAXMONDAYS 31
#define AVEMONDAYS 30
#define MINMONDAYS 28
#define BASEYEAR   1
#define YEARDAYS   365
#define YEARMONS   12
#define WEEKDAYS   7

typedef enum
{
	JAN = 1,
	FEB,
	MAT,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC
}MONTH;

typedef enum
{
	Sun,
	Mon,
	Two,
	Wed,
	Thu,
	Fri,
	Sat
}WEEK;

//显示万年历
void ShowCalender(const int year,const int month);
