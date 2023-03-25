#include <stdio.h>

/**
 * main - print num from 1 to 100
 * print fizz for multiples of three
 * print buzz for multiple five
 * print fizzbuzz for both multiple of three and five
 * Return: Always 0 (success)
 */

int main(void)

{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");
	return (0);
}
