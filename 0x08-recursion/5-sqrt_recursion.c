#include "main.h"

/**
 * _sqrt_recursion - Finds and returns the natural square root
 * of a number
 *
 * @n: Given integer
 *
 * Return: The square root or -1 if no square root
 */

int root(int i, int j);

int _sqrt_recursion(int n)
{
	return (root(0, n));
}

/**
 * root - Recursively approximates the square root
 *
 * @i: checker value
 * @j: squared value
 *
 * Return: int
 */

int root(int i, int j)
{
	if (i > j)
	{
		return (-1);
	}
	else if (i * i == j)
	{
		return (i);
	}
	else
	{
		return (root(i + 1, j));
	}
}
