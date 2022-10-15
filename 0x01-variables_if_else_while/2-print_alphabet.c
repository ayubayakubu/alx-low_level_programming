#include <stdio.h>
/**
 * main- Printing the letter of the alphabets
 * Return:Always 0
 *
 */
int main(void)

{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha(i));
	putchar('\n');
	return (0);
	}
}
