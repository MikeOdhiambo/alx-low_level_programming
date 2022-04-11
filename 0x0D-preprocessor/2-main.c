#include <stdio.h>

/**
 * main - Prints the name of the file the program
 * is compiled from
 *
 * Return: 0 (Always)
 */
int main(void)
{
	printf("%s\n", __FILE__);
}
