#include "main.h"
#include <stdio.h>

void elsesmall(int prod, int j);
void nine(int prod, int j);
void ninenine(int prod, int j);

/**
 * print_times_table - prints the n table of n passed
 * @n: this is a parameter passed for the table
 *
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod > 99)
			{
				ninenine(prod, j);
			}
			else if (prod > 9)
			{
				nine(prod, j);
			}
			else
			{
				elsesmall(prod, j);
			}
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

/**
 * ninenine - prints the n table of n passed
 * @prod: this is a parameter passed for the table
 * @j: this is a parameter passed for the table
 *
 * Return: 0 (Success)
 */
void ninenine(int prod, int j)
{
	if (j != 0)
	{
		_putchar(' ');
	}
	_putchar((prod / 100) % 10 + '0');
	_putchar((prod / 10) % 10 + '0');
	_putchar(prod % 10 + '0');
}

/**
 * nine - prints the n table of n passed
 * @prod: this is a parameter passed for the table
 * @j: this is a parameter passed for the table
 *
 * Return: 0 (Success)
 */
void nine(int prod, int j)
{
	if (j == 0)
	{
		_putchar((prod / 10) % 10 + '0');
		_putchar(prod % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((prod / 10) % 10 + '0');
		_putchar(prod % 10 + '0');
	}
}

/**
 * elsesmall - prints the n table of n passed
 * @prod: this is a parameter passed for the table
 * @j: this is a parameter passed for the table
 *
 * Return: 0 (Success)
 */
void elsesmall(int prod, int j)
{
	if (j == 0)
	{
		_putchar(prod % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(prod % 10 + '0');
	}
}
