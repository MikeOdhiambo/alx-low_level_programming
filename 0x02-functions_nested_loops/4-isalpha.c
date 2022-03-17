#include "main.h"

/**
 * _isalpha - checks whether c is alpha
 * @c: variable that could be any character
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	int i = (int)c;

	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (1);
	}

	return (0);
}
