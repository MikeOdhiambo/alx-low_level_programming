#include <stdlib.h>

#include "main.h"

/**
 * *_realloc - reallocates memory using malloc
 * @ptr: pointer to the peviously allocated memory
 * @old_size: old size
 * @new_size: new size for memory block
 *
 * Return: pointer (Success), NULL (failure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	oldptr = ptr;

	newptr = malloc(new_size);

	if (!newptr)
		return (NULL);

	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			newptr[i] = oldptr[i];
	else
		for (i = 0; i < old_size; i++)
			newptr[i] = oldptr[i];

	free(ptr);
	return (newptr);
}
