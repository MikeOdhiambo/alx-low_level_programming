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
		return;
	}
	printf("Name: %s\n", ptr->name ? ptr->name : "(nil)");
	printf("Age: %f\n", ptr->age);
	printf("Owner: %s\n", ptr->owner ? ptr->owner : "(nil)");
}
