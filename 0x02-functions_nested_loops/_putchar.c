#include "main.h"
#include <unistd.h>

/**
 * _putchar - write code to print
 * @c - character to print
 * Return : success 1 failure 0
 */
int _putchar(char c)
{
	return (write( 1, @c, 1));
}

