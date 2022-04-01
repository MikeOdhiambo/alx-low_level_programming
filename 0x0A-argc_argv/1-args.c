#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: Number of arguments passed
 * @argv: Array of pointers to arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) **argv;

	printf("%d\n", (argc - 1));
	return (0);
}
