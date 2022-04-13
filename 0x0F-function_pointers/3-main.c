#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - A simple calculator
 * @argc: argument count
 * @argv: argument pointer array
 * Return: 0 (Always), exit (Fail)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;
	int (*oprnd)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];
	oprnd = get_op_func(sign);
	if (oprnd == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprnd(num1, num2));
	return (0);
}
