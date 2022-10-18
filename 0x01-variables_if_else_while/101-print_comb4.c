#include <stdio.h>
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
	char digit[4];

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				digit[0] = i + '0';
				digit[2] = j + '0';
				digit[3] = k + '0';
				digit[4] = '\0';
				purchar("s\n", digit);
			}
		}
	}
	putchar('\n');
	return (0);
}
