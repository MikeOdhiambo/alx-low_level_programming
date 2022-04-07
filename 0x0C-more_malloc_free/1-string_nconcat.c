#include <stdlib.h>

#include "main.h"
/**
 * *string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to use
 *
 * Return: pointer (Success), NULL (fail)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, len2, buff, j;

	for (len1 = 0; s1[len1]; len1++)
	{
	}
	for (len2 = 0; s2[len2]; len2++)
	{
	}
	if (n >= len2)
	{
		n = len2;
	}
	buff = len1 + n + 1;
	ptr = malloc(sizeof(char) * buff);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < len1; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = len1; j < buff - 1; j++)
	{
		ptr[j] = s2[j - len1];
	}
	ptr[buff - 1] = '\0';
	return (ptr);
}
