#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		int i = 97;

		while (i <= 122)
		{
			char c = i;

			_putchar(c);
			i++;
		}
		_putchar('\n');
		counter++;
	}
}
