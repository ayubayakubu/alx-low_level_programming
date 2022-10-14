#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of a short int: %2d byte(s)\n", sizeof(short int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));
	printf("Size of a double: %2d byte(s)\n", sizeof(double));
	printf("Size of a long double: byte(s)\n", sizeof(long double));
	return (0);
}
