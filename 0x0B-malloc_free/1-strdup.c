#include <stdlib.h>

#include "main.h"
/**
 * *_strdup - copies a string to newly allocated space
 * @str: string to be copied
 *
 * Return: pointer (Success), NULL (failure)
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr != NULL)
	{
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
		ptr[j] = '\0';
	}
	return (ptr);
}
