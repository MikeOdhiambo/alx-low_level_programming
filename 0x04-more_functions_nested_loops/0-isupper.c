#include <stdio.h>
/**
 * _isupper - check if upper
 * @c: parameter to be checked
 *
 * Return: 1 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
