#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring in the initial segment
 * @s: String to search
 * @accept: Bytes to search for
 *
 * Return: Number of bytes in s that are in the accept string
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter;
	int i, j;

	for (j = 0; accept[j] != 32 && accept[j]; j++)
	{
		counter = 0;
		for (i = 0; s[i]; i++)
		{
			if (s[i] == accept[j])
			{
				counter += 1;
			}
		}
	}
	return (counter);
}
