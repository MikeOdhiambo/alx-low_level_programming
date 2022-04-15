#include "variadic_functions.c"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between numbers
 * @n: Number of parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i < (n - 1))
		{
			printf("%d%s", va_arg(nums, int), separator)
		}
		else
		{
			printf("%d%s\n", va_arg(nums, int), separator);
		}
	}
	va_end(nums);
}
