#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	struct dog *ptr;

	ptr = d;
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(struct dog));
	}
	ptr->name ? printf("Name: %s\n", ptr->name) : printf("Name: (nil)\n");
	ptr->age ? printf("Age: %f\n", ptr->age) : printf("Age: (nil)\n");
	ptr->owner ? printf("Owner: %s\n", ptr->owner) : printf("Owner: (nil)\n");
}
