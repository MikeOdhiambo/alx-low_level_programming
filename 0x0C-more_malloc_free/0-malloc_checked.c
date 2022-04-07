#include <stdlib.h>

#include "main.h"
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Bytes to allocate
 *
 * Return: pointer (Success), 98 (Fail)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (!b)
	{
		return (NULL);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
