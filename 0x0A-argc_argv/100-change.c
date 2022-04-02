#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main - Get the minimum number of coin change for a given sum
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 if success, 1 if too many args passed
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int num, i;
	int bank[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= bank[i])
		{
			cents++;
			num -= bank[i];
		}
	}

	printf("%d\n", cents);
	return (0);
}

