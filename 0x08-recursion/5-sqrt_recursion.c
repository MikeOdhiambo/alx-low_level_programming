#include "main.h"

/**
 * root - Approximates the square root recursively
 *
 * @i: checker integer
 * @j: squared number
 *
 * Return: square root or -1 if nonexistent
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
		return (root(i + 1, j));

}

/**
 * _sqrt_recursion - Find the natural square root of an integer
 * @n: squared number
 *
 * Return: square root or -1 if nonexistent
 */
int _sqrt_recursion(int n)
{
	return (root(0, n));
}
