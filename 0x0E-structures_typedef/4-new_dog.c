#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - Finds the length of a string
 * @str: Given string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	return (i);
}

/**
 * _strcpy - Copy a string to another
 * @src: String to copy
 * @dest: Destination for copying
 *
 * Return: void
 */
void _strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - Creates an instance of dog
 * @name: str
 * @age: float
 * @owner: str
 *
 * Return: Pointer(Success), NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;
	int len1, len2, i;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}
	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
	{
		return (NULL);
	}
	nDog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (nDog->name == NULL)
	{
		free(nDog);
		return (NULL);
	}
	nDog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (nDog->owner == NULL)
	{
		free(nDog->name);
		free(nDog);
		return (NULL);
	}
	_strcpy(nDog->name, name);
	nDog->age = age;
	_strcpy(nDog->owner, owner);
	return (nDog);
}

