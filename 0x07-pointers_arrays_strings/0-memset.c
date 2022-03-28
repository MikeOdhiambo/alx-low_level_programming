#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Memory area to be filled with bytes
 * @b: The byte to be filled
 * @n: Number of bytes
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s++ = (unsigned char)b;
	}
	return (s);
}
