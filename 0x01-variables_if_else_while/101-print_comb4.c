#include <stdio.h>
/**
 * main - Prints unique three digit combinations
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && i != k && j != k)
				{
					if ((i - j) < 0 && (j - k) < 0)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
						putchar(',');
						putchar(' ');
					}
				}
				else
				{
					continue;
				}
			}
		}
	}
	return (0);
}
