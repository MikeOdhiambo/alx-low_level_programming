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
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return;
}
