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
