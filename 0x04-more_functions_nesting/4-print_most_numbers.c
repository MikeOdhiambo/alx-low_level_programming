#include "main.h"

/**
 * print_most_numbers - print 0 - 9 no 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		if (n == 4 || n == 2)
		{
			n++;
			continue;
		}
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
