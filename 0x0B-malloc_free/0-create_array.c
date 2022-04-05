#include <stdlib.h>

#include "main.h"
/**
 * *create_array -  Creates array of characters initialized to a char
 * @size: size of array
 * @c: character to initialize the array
 *
 * Return: pointer (Success), Null (failure)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);

}
