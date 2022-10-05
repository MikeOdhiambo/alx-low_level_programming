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
 * @array: Array to search the value in
 * @size: Length of the array
 * @value: Number to be searched
 * Return: The index where the value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, j, sub_size;
	int m = _round(sqrt((int)size));
	int prev = (i - 1) * m < 0 ? 0 : (i - 1) * m;

	while ((i * m) <= (int)size)
	{
		if (array[i * m] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n", (i * m) - m, (i * m));
			return (i * m);
		}
		if (array[i * m] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, (i * m));
			sub_size = (i * m) - ((i - 1) * m);
			for (j = 0; j < sub_size; j++)
			{
				printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
				if (array[prev] == value)
					return (prev);
				prev += 1;
			}
		}
		printf("Value checked array[%d] = [%d]\n", i * m, array[i * m]);
		i += 1;
	}
	return (-1);
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    return (EXIT_SUCCESS);
}
