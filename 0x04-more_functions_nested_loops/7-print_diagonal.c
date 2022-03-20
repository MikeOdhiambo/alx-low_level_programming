#include "main.h"

/**
 * print_diagonal - print diagonal in the terminal
 * @n: number of dashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int h;
	int i = n;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i > 0)
	{
		h = 0;

		while (h < (n - i))
		{
			_putchar(' ');
			h++;
		}
		i--;
		_putchar('\\');
		_putchar('\n');
	}
}
