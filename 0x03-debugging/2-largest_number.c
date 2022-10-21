#include "main.h"
/**
 *largest_number - returns largest number
 *@a: first number
 *@b: secind number
 *@c: third number
 *Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int lg;

	if (a > b)
	{
		if (a > c)
			lg = a;
		else if (a > c)
			lg = a;
		else
			lg = c;
	}
	else
	{
		if (b < c)
			lg = c;
		else
			lg = b;
	}
	return (lg);
}
