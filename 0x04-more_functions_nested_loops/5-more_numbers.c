#include "main.h"

/**
 * more_numbers - prints numbers ten times from 0 - 14
 *
 * Return: (void)
 */

void more_numbers(void)

{
char a, b;
{
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
			if (b >= 10)
			_putchar(a);
		_putchar(b % 10 + 0);
	}

	_putchar('\n');
}

}
