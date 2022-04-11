#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to struct
 * @name: str name of dog
 * @age: float age of dog
 * @owner: str owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(struct dog));
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
