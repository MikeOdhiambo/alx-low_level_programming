#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Creates a new instance of dog
 * @name: str name of dog
 * @age: float age of dog
 * @owner: str owner
 *
 * Return: Pointer (Success), NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t ndog, *ptr;
	char *namecpy, *ownercpy;
	int i, j, len;

	if (name == NULL)
	{
		return;
	}
	if (owner == NULL)
	{
		return;
	}
	for (i = 0; name[i]; i++)
	{
	}
	for (j = 0; owner[j]; j++)
	{
	}
	namecpy = malloc(sizeof(char) * (i + 1));
	ownercpy = malloc(sizeof(char) * (j + 1));
	for (len = 0; len < i; len++)
	{
		namecpy[len] = name[len];
	}
	for (len = 0; len < j; len++)
	{
		ownercpy[len] = owner[len];
	}
	namecpy[len] = '\0';
	ownercpy[len] = '\0';

	ptr = &ndog;
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(dog_t));
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
