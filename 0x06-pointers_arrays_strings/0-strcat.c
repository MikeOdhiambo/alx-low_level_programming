#include "main.h"

/**
 * *_strcat - Concatenates two strings dest and src
 * @dest: destination string
 * @src: string to be contatenated
 *
 * Return: The pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
