#include "main.h"

/**
 * _isdigit - Cheack if entry is a digit
 * @c: print character
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
