#include <stdlib.h>

#include "dog.h"

/**
 * init_dog - Initialize variable of type struct
 * @d: Pointer to struct
 * @name: Name of dog
 * @age: Age as a float
 * @owner: Name of owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
