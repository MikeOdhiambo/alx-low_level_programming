#include <stdio.h>

/**
 * main - Print the alphabet in lower case excep 'e' and 'q'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	
	return (0);
}
