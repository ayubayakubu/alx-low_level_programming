#include "main.h"
/**
 * print_diagonal- printing a diagonal
 * @n: number of '\' to be printed
 */
print_diagonal(int n)
{
	int x, y;

	if (n < 0)
		_putchar('\n');
	for (x = 0; x < n; n++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

