#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog structure
 * @name: Name of dog
 * @age: Age as a float
 * @owner: Name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
