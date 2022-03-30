#include "main.h"

/**
 * _sqrt_recursion - Finds and returns the natural square root
 * of a number
 * @n: Given integer
 *
 * Return: The square root or -1 if no square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt(0, n));
}

/**
 * sqrt - Approximates the square root recursively
 * @i: checker value
 * @j: squared value
 *
 * Return: int
 */
int sqrt(int i, int j)
{
	if (i > 0)
	{
		return (-1);
	}
	else if (i * i = j)
	{
		return (i);
	}
	else
	{
		return (sqrt(i + 1, j));
	}
}
