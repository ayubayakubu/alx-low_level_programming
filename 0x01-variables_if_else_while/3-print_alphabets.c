#include<stdio.h>
/**
 * main- displaying lower and upper case alphabets
 * Rrturn:Always 0
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	for (s = 'A'; s <= 'Z'; s++)
		putchar (s);
	putchar ('\n');
}
