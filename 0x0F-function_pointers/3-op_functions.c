#include "calc.h"

/**
 * op_add - Adds two integers
 * @a: First int
 * @b: Second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
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
	return (a - b);
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
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates remainder of division
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
