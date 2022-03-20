#include <stdio.h>

/**
 * _isdigit - checks if is digit
 * @c: to be checked
 *
 * Return: 1 (Succcess)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
