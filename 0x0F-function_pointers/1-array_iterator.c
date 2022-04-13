#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function for each array element
 * @array: Pointer to array
 * @size: Size of array
 * @action: Pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		if (size > 0)
		{
			while (i < size)
			{
				action(array[i]);
				i++;
			}
		}
	}
}
