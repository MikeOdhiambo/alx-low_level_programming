#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: Pointer to string of 0s and 1s
 *
 * Return: Converted number, NULL (Fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, base, pow, len, i;

	if (!b)
	{
		return (0);
	}
	for (len = 0; b[len]; len++)
	{
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
		{
			base = 1;
			for (pow = len - (i + 1); pow > 0; pow--)
			{
				base = base * 2;
			}
		}
		else if (b[i] == '0')
		{
			continue;
		}
		else
		{
			return (0);
		}
		dec += base;
	}
	return (dec);
}
