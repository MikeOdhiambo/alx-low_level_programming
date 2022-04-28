#include "main.h"

/**
 * clear_bit - Sets the value of bit at given index to 0
 * @n: Pointer to decimal number
 * @index: Index of bit to set
 *
 * Return: 1 (Success), 0 (Fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if ((1 << index) & *n)
	{
		*n ^= (1 << index);
	}
	return (1);
}
