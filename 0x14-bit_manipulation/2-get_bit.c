#include "main.h"

/**
 * get_bit - Returns value of bit at given index
 * @n: Decimal number
 * @index: Index of location
 *
 * Return: Value of bit, -1 (Error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 62)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
