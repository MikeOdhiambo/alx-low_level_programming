#include "main.h"

/**
 * *_strncat - Concatenates two strings with at most n bytes from the second
 * @dest: Destination string
 * @src: Sstring to be concatenated
 * @n: Number of bytes to concatenate from src
 *
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
