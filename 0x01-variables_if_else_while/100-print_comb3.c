#include<stdio.h>
/**
 * main - combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 58;

	while  (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e < 56)
				{
					break;
				}
				putchar (',');
				putchar (' ');
			}
			i++;
		}
		e++;
	}
	putchar ('\n');
	return (0);
}