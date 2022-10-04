#include "search_algos.h"

/**
 * _round - Rounds up a number
 * @x: Number to be rounded up
 * Return: int
 */

int _round(double x)
{
	if (x < 0.0)
		return ((int)(x - 0.5));
	else
		return ((int)(x + 0.5));
}

/**
 * binary_search - Searches for a value using binary search algorithm
 * @array: Array to search the value in
 * @size: Length of the array
 * @value: Number to be searched
 * Return: The index where the value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1;
	int mid, i;

	if (!array)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = _round((start + end) / 2);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
