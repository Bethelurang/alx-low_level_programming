#include <stdio.h>
#include "main.h"

/**
 * main - print prime factors
 *
 * Return: 0
 */

int main(void)
{
	long int n;
	long int max;
	long int;

	n = 612852475143;
	max = -1;

	while (n & 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf('%d/n", max);
	return (0);
}
