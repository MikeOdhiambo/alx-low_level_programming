#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees an allocated block
 * @d: memory to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
