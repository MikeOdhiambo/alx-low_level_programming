#include "dog.h"

/**
 * init_dog - Initialize variable of type struct
 * @d: Pointer to struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
