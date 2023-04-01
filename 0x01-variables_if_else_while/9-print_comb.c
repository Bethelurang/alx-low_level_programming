#include <stdio.h>

/**
 * main - print single num seperated by , followed by space
 *
 * Return: 0
 */

int main(void)

{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
