#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: String to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
		return;
	}
	putchar(*s);
	_puts_recursion(s++);
}
