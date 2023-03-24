#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days = 0, a;

	for (a = 1; a < month; a++)
	{
		days += days_in_month[a];
	}
	days += day;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		day++;
		days_in_month[2] = 29;
	}
	if (month > 12 || month < 1 || day < 1 || day > days_in_month[month])
	{
		printf("invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("day of year: %d\n", days);
		printf("remaining days: %d\n", 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) - days);
	}
}

