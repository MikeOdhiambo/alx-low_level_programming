#include "main.h"

/**
 * get_endianness - Checks the endianness of a machine
 *
 * Return: 1 (Little Endian), 0 (Big endian)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr;

	ptr = (char *)&i;
	if (ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
