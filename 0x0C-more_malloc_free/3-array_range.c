#include <stdlib.h>

#include "main.h"
/**
 * *array_range - creates array of integers for a range of values
 * @min: lower bound
 * @max: upper bound
 *
 * Return: pointer (Success), NULL (fail)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0; buff;

	if (min > max)
	{
		return (NULL);
	}
	buff = (max - min) + 1;
	ptr = malloc(sizeof(int) * buff);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
