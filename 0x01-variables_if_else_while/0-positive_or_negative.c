#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print random num
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		putchar("%d is positive\n", n);
	}
	else if (n == 0)
	{
		putchar("%d is zero\n", n);
	}
	else
	{
		putchar("%d is negative\n", n);
	}
	return (0);
}
