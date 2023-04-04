#include "main.h"

/**
 * _memcpy - print fuctions that copies memeory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[b];
		n--;
	}
	return (dest);
}
