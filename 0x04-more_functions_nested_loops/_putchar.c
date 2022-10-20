#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the charac ter c to stout
 * @c : print thr character c
 * Return: Alwayd 0 success
 */
int _putchar(char c)
{
	return (wtite(1, &c, 1));
}


