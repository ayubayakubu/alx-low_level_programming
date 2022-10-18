#include <stdio.h>
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;
	char digit[4];

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				digit[0] = i + '0';
				digit[2] = j + '0';
				digit[3] = k + '0';
				digit[4] = '\0';
				putchar("s\n", digit);
			}
		}
	}
	putchar('\n');
	return (0);
}
