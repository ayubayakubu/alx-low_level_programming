#include "main.h"

/**
 *more_numbers - print form 0 to 9
 *Return: Always 0
 *
 */
void more_numbers(void)
{
	int n, b;

	for (n = 0; n <= 9; n++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b  > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
