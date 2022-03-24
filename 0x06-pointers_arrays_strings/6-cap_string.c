#include "main.h"

/**
* cap_string - capitalize all words of a string
* @a: string to capitalize
*
* Return: modified string
*/

char *cap_string(char *a)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}'};

	for (i = 0; a[i]; i++)
	{
		if (a[0] >= 'a' && a[0] <= 'z')
			a[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (a[i] == sep[j])
				if (a[i + 1] >= 'a' && a[i] <= 'z')
					a[i + 1] -= 32;
		}
	}
	return (a);
}
