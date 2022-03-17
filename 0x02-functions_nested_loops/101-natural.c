#include "main.h"
#include <stdio.h>

/**
 * print_sum_multiples_1024 - prints
 * the sum of natural numbers divisible by 3 or 5 upto 1024
 *
 * Return: 0 (Success)
 */
void print_sum_multiples_1024(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);
	printf("\n");
}

/**
 * main - runs the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_sum_multiples_1024();

	return (0);
}
