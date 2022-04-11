#include "dog.h"

/**
 * init_dog - Initialize a dog structure variable
 * @d: Pointer to struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return;
}
