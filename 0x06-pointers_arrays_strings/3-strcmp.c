#include "main.h"

/**
 * int _strcmp(char *s1, char *s2) - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: number of differences
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
