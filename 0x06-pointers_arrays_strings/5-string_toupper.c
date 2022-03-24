#include "holberton.h"

/**
* string_toupper - change all lowercase letters to uppercase
* @a: string to change
*
* Return: modified string
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
