#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Decimal number
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int pos;
	int i;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		pos = n >> i;

		if (pos)
		{
			if (pos & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
	}

}
