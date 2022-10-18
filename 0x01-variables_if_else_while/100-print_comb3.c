#include<stdio.h>
/**
 * main - combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, e;

	for  (e = 0; e < 8)
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
