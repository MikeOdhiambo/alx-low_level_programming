#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * isNum - function that checks if whole string is a digit.
 * @str: string to check.
 * Return: 1 if is a digit, 0 if it is not.
 */
int isNum(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - Sum positive integers
 *
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isNum(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
