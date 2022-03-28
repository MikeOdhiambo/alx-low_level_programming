#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to look for
 *
 * Return: s (if found), NULL (otherwise)
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else
		{
			return (NULL);
		}
	}
}
