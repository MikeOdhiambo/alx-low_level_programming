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
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator)
		{
			for (j = 0; separator[j]; j++)
			{
				printf("%c", separator[j]);
			}
		}
	}
	printf("%d\n", va_arg(nums, int));
	va_end(nums);
}
