#include "variadic_functions.h"

/**
 * print_strings - print variable string params
 * @separator: separator between strings
 * @n: number of params
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strlist;
	char *ps;

	va_start(strlist, n);
	for (i = 0; i < n; i++)
	{
		ps = va_arg(strlist, char *);
		if (!ps)
		{
			ps = "(nil)";
		}
		if (!separator)
		{
			printf("%s", ps);
		}
		else if (separator && i == 0)
		{
			printf("%s", ps);
		}
		else
		{
			printf("%s%s", separator, ps);
		}
	}
	printf("\n");
	va_end(strlist);
}
