#include "main.h"

/**
 * _strlen_recursion - Gets length of string and returns it
 * @s: Given string
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
