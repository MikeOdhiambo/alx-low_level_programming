#include "main.h"

/**
 *  _abs- prints the sign of the number entered
 *@n: variable that could be any character
 *
 * Return: 1 (Success)
 */
int _abs(int n)
{
	int i = (int)n;

	if (n > 0)
	{
		return (n);
	}
	else if (i == 0)
	{
		return (n);
	}

	return (n * -1);
}
