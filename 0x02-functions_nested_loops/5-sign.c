#include "main.h"

/**
 * print_sign - prints the sign of the number entered
 *@n: variable that could be any character
 *
 * Return: 1 (Success)
 */
int print_sign(int n)
{
	int i = (int)n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar(0 + '0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
