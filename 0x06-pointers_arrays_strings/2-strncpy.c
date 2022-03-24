#include "main.h"

/**
 * *_strncpy - Copies a string
 *
 * @dest: Destination to copy to
 * @src: string to be copied
 * @n: Byte to be copied
 *
 * Return: The new copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
