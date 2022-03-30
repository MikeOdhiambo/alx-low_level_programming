#include "main.h"

/**
 * _factorial - Calculates the factorial of a number
 * @n: integer for which to obtain the factorial
 *
 * Return: The answer of the factorial or -1 for an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
