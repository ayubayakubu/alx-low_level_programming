#include<stdio.h>
/**
 * main - displaying digits
 * Return:Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar("\n");
	return (0);
}
