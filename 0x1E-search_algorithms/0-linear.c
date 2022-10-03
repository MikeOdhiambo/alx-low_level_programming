#include "search_algos.h"

/**
 * linear_search - Searches for a value using linear search algorithm
 * @array: Array to search the value in
 * @size: Length of the array
 * @value: Number to be searched
 * Return: The index where the value is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	for (int i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
