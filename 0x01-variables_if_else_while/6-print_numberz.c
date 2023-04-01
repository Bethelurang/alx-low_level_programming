#include <stdio.h>

/**
 * main - print single digit num of base 0
 * from 0 - 9 without using char
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);

}
