#ifndef DOG
#define DOG

/**
 * struct dog - defines a dog structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Defines a dog structure with name,
 * age and owner members
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

#endif
