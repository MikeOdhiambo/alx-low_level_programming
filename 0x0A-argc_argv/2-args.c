#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives including the first
 * @argc: Number of arguments passed
 * @argv: Array of pointers to arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
