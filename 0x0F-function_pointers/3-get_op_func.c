#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function for operation
 * @s: operand to check
 * Return: Pointer to function (Success), NULL (Fail)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add },
		{"-", op_sub },
		{"*", op_mul },
		{"/", op_div},
		{"%", op_mod },
		{NULL, NULL}
	}
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) != *s)
		{
			return (NULL);
		}
		i++;
	}
	return (ops[i].f);
}
