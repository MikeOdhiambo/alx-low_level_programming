#include "main.h"

/**
 * *_memcpy - Copies bytes from one memory area to another
 * @dest: Where to copy the bytes to
 * @src: Where to copy the bytes from
 * @n: Number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
