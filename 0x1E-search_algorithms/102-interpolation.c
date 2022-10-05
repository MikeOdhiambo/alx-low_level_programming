#include "search_algos.h"

/**
 * interpolation_search - Search an array using interpolation search
 * @array: Pointer to array to search
 * @size: Length of array
 * @value: Item to be searched for
 *
 * Return: Index of value (Success), -1 (Fail)
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	if (!array || size == 0)
		return (-1);
	if (pos > size - 1)
		printf("Value checked array[%lu] is out of range\n", pos);
	while (low <= high && array[high] >= value && array[low] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
		pos = low + (((double)(high - low) /
		     (array[high] - array[low])) * (value - array[low]));
	}
	return (-1);
}
