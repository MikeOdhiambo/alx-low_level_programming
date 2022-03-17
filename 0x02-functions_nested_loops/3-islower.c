#include "main.h"
#include <stdio.h>

/**
 * _islower - checks to see if the character give is lower
 * @c: variable that could be any character
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	int i = (int)c;

	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	return (0);
}
