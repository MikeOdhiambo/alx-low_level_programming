#include "search_algos.h"
#include <math.h>
#include <stdlib.h>

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
 * jump_search - Searches for value in array using jump search algorithm
 * @array: Array to search the value in
 * @size: Length of the array
 * @value: Number to be searched
 * Return: The index where the value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, j, sub_size;
	int m = _round(sqrt((int)size));
	int prev;

	if (!array)
		return (-1);

	while ((i * m) <= (int)size)
	{
		prev = (i * m) - m < 0 ? 0 : (i * m) - m;
		if (array[i * m] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, (i * m));
			sub_size = (i * m) - prev;
			for (j = 0; j <= sub_size; j++)
			{
				printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
				if (array[prev] == value)
					return (prev);
				prev += 1;
			}
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i * m, array[i * m]);
		i += 1;
	}
	prev = (i * m) - m;
	printf("Value found between indexes [%d] and [%d]\n", prev, (i * m));
	for (j = prev; j <= (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		j += 1;
	}

	return (-1);
}
