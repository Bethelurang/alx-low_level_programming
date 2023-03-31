#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: is the char
 * @src: is the char
 * @n: is the int
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)

{

	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		b++;
	}
	dest[a] = '\n';
	return (dest);
}
