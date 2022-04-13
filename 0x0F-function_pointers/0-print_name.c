#include "function_pointers.h"

/**
 * print_name - Prints a name given a pointer to function
 * @name: Name to print
 * @f: Pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
