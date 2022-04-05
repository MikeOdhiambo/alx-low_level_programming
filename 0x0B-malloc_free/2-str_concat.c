#include <stdlib.h>

#include "main.h"
/**
 * *str_concat - Concatenates two strings at a new memory
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer (Success), NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1]; len1++)
	{
	}
	for (len2 = 0; s2[len2]; len2++)
	{
	}
	len3 = len1 + len2;
	ptr = malloc((len3 + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (i = len1; i < len3; i++)
		{
			ptr[i] = s2[i - len1];
		}
		ptr[len3] = '\0';
	}
	return (ptr);
}
