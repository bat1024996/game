
#include"calender.h"

int IsLeepYear(int year)
{
	return (year % (year % 100 ? 4 : 400) ? 0 : 1);
}

int getYearOfDay(const int year)
{
	int yearNum = year - BASEYEAR;
	int walker = 0, counter = 0;
	if (year == 0)
	{
		return 1;
	}
	for (walker = BASEYEAR; walker < year; ++walker)
	{
		if (IsLeepYear(walker) == 1)
			counter++;
	}
	return (YEARDAYS*yearNum + counter + 1) % WEEKDAYS;

}

void printMonth(const WEEK firstDay, int length)
{
	WEEK weekday = firstDay%WEEKDAYS;
	int i;
	printf("  Sun  Mon  Twe  Wed  Thu  Fri  Sat\n	");
	for (i = 1; i < length; i++)
	{
		weekday = (++weekday) % WEEKDAYS;
		printf("%5d", i);
		if (weekday == 0)
			printf("\n");
	}
	printf("\n");
}

void ShowCalender(const int year, const int month)
{
	int i = 0;
	WEEK yDay = getYearOfDay(year);
	int vDay = IsLeepYear(year);
	int monWeeks[YEARMONS + 1];
	int monLen[YEARMONS + 1];
	monLen[0] = 0;
	monLen[JAN] = MAXMONDAYS;
	monLen[FEB] = MINMONDAYS+vDay;
	monLen[MAT] = MAXMONDAYS;
	monLen[APR] = AVEMONDAYS;
	monLen[MAY] = MAXMONDAYS;
	monLen[JUN] = AVEMONDAYS;
	monLen[JUL] = MAXMONDAYS;
	monLen[AUG] = MAXMONDAYS;
	monLen[SEP] = AVEMONDAYS;
	monLen[OCT] = MAXMONDAYS;
	monLen[NOV] = AVEMONDAYS;
	monLen[DEC] = MAXMONDAYS;

	monWeeks[0] = 0;
	monWeeks[JAN] = yDay;
	for (i = JAN; i < DEC; i++)
	{
		monWeeks[i + 1] = (monWeeks[i] + monLen[i]) % WEEKDAYS;
	}

	printf("                  %d,    %d  \n", year, month);
	printf("---------------------------------------------\n");
	printMonth(monWeeks[month], monLen[month]);
	printf("\n");

}
