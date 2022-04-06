#include <stdlib.h>

#include "main.h"
/**
 * _strlen - Finds and returns length of a string
 * @s: given string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{
	}
	return (len);

}

/**
 * argstostr - concatenate program arguments followed
 * by new line
 * @ac: Number of arguments
 * @av: Array of pointers to arguments
 *
 * Return: pointer (Success), NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	char *newStr;
	int i, j;
	int k = 0;
	int len = 0, full = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
		full += len;
	}
	newStr = malloc(sizeof(char) * (full + 1));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k++] = '\n';
	}
	newStr[k] = '\0';
	return (newStr);
}

