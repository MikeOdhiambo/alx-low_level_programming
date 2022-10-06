#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search through an array using Jump Search Algorithm
 * @array: Pointer to array to search through
 * @size: Length of array
 * @value: Value to be searched
 *
 * Return: Index of found value (Success), -1 (Fail)
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j;
	size_t m = sqrt(size);
	size_t step = i * m;

	if (!array || size == 0)
		return (-1);

	while (step <= size)
	{
		if (array[step] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", step - m, step);
			for (j  = step - m; j <= step; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		i += 1;
		step = i * m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", step - m, step);
	for (j = step - m; j <= size - 1; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	return (-1);
}
