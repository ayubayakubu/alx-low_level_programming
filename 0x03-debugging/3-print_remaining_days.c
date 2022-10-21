#include "main.h"
/**
 *print_remaining_days- pick a day and print how many days remaining
 *@month: print month
 *@day : print days
 *@year: print year
 *Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Day of the year %d\n", day);
		printf(" remaining days %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid day %02d/%02d/%04d\n", month, day - 31, year);
		}
			else
			{
				printf("day of the year %d%\n", day);
				printf("remaing days %d\n", 365 - day);
			}
		}
}
