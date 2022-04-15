#include "variadic_functions.h"

/**
 * print_numbers - print all integer parameters
 * @separator: string between integers
 * @n: number of params
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlst;
	unsigned int i;

	va_start(nlist, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (separator && i != (n - 1))
		{
			printf("%d%s", va_arg(nlist, int), separator);
		}
		else
		{
			printf("%d", va_arg(nlist, int));
		}
	}
	va_end(nlist);
	printf("\n");
}
