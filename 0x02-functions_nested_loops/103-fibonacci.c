#include "main.h"
#include <stdio.h>

/**
 * even_liber_abbaci - prints the finonacci 50 sequence
 *
 * Return: 0 (Success)
 */
void even_liber_abbaci(void)
{
	unsigned long fibo1;
	unsigned long fibo2;
	unsigned long holder;
	unsigned long sum;

	fibo1 = 0;
	fibo2 = 1;

	while (fibo2 < 4000000 && fibo2 > 0)
	{
		if (fibo2 % 2 == 0)
		{
			sum += fibo2;
		}
		holder = fibo2;
		fibo2 += fibo1;
		fibo1 = holder;
	}

	printf("%lu", sum);
	printf("\n");
}


/**
 * main - runs the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	even_liber_abbaci();

	return (0);
}
