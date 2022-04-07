#include <stdlib.h>

#include "main.h"
/**
 * min - return the minimum of two positive integers
 * @a: first number
 * @b: second number
 *
 * Return: minimum int
 */
int min(unsigned int a, unsigned int b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

/**
 * *_realloc - Reallocates a memory block using malloc
 * @ptr: pointer to old memory block
 * @old_size: old buffer size
 * @new_size: new buffer size
 *
 * Return: new pointer (Success), NULL (Fail)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr;
	unsigned int i;
	int buff;

	oldptr = ptr;
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	buff = min(old_size, new_size);
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		free(newptr);
		return (NULL);
	}
	for (i = 0; i < buff; i++)
	{
		newptr[i] = oldptr[i];
	}
	free(ptr);
	return (newptr);
}
