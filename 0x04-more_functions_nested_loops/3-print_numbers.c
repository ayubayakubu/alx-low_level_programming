#include "main.h"

/**
 * print_numbers- print numbers from 0 to 9
 * return: Always 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 20)
		_putchar(a++ + '0');
	_putchar('\n');
}
