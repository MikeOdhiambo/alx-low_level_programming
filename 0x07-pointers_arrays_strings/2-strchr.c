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
	int addr;

	while (1)
	{
		addr = *s++;
		if (addr == c)
		{
			return (s - 1);
		}
		if (addr == 0)
		{
			return (NULL);
		}
	}
}
