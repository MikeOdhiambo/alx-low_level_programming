#include "main.h"

/**
 * flip_bits - Returns number of bits to flip from one number
 * to another
 * @n: First Decimal number
 * @m: Destination decimal number
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;

	while (n)
	{
		if ((n & 1) != 0)
		{
			i++;
		}
		n = n >> 1;
	}
}
