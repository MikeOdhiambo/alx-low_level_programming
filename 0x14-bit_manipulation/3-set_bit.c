#include "main.h"

/**
 * set_bit - Sets value of bit at given index to 1
 * @n: pointer to decimal number
 * @index: Index of bit to set
 *
 * Return: 1 (Success), -1 (Fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n | 1 << index);
	return (1);
}
