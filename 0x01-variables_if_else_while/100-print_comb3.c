#include <stdio.h>
/**
 * main - Prints all different two-digit combinations
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i - j) < 0)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',')
			}
		}
	}
}
