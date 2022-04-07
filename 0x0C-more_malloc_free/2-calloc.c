#include <stdlib.h>

#include "main.h"
/**
 * *_calloc - allocates and initializes memory using malloc
 * @nmemb: Number of items
 * @size: size of each item
 *
 * Return: pointer (Success), NULL (Fail)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
