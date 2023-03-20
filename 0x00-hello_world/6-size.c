#include <stdio.h>

/**
 * main -print the size of various type of a computer using printf
 *Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The Size of a char is: %lu.\n", (unsigned long)sizeof(a));
	printf("The Size of an int is: %lu.\n", (unsigned long)sizeof(b));
	printf("The Size of a long int is: %lu.\n", (unsigned long)sizeof(c));
	printf("The Size of a long long int is: %lu.\n", (unsigned long)sizeof(d));
	printf("The Size of a float is: %lu.\n", (unsigned long)sizeof(e));

	return (0);

}
