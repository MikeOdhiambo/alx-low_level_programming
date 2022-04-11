#ifndef DOG
#define DOG

void init_dog(struct dog *d, char *name, float age, char *owner);
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

#endif
