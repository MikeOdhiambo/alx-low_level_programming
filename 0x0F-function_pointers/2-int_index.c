#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to search through
 * @size: size of array
 * @cmp: Pointer to search function
 *
 * Return: Index of integer (Succes), -1 (Fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
			return (-1);
		}
	}
	return (-1);
}
