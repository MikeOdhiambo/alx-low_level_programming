#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First int
 * @b: Second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - Subtracts two integers
 * @a: First int
 * @b: Second int
 *
 * Return: Difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Quotient, 100 (Fail)
 */
int op_div(int a, int b)
{
	int quot;

	if (!a || !b)
	{
		printf("Error\n");
		exit(100);
	}
	quot = a / b;
	return (quot);
}

/**
 * op_mod - Calculates remainder of division
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division, 100 (Fail)
 */
int op_mod(int a, int b)
{
	int rem;

	if (!a || !b)
	{
		printf("Error\n");
		exit(100);
	}
	rem = a % b;
	return (rem);
}
