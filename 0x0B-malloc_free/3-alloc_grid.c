#include <stdlib.h>

#include "main.h"
/**
 * **alloc_grid - Creates a 2d array of integers
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: pointer (Success), NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}
			for (j = 0; j < height; j++)
			{
				free(arr[j]);
			}
			free(arr);
		}
	}
	return (arr);
}
