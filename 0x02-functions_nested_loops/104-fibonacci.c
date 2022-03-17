#include "main.h"
#include <stdio.h>

/**
 * strict_fibonacci - prints the finonacci 50 sequence
 *
 * Return: 0 (Success)
 */
void strict_fibonacci(void)
{
	unsigned long int fibo1;
	unsigned long int fibo2;
	unsigned long int holder;
	int i;

	fibo1 = 0;
	fibo2 = 1;

	for (i = 0; i < 98; i++)
	{
		holder = fibo2;
		fibo2 += fibo1;
		fibo1 = holder;

		printf("%lu", fibo2);
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
}


/**
 * main - runs the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	strict_fibonacci();

	return (0);
}
