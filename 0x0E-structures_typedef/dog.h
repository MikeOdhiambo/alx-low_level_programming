#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a collection of dog properties
 * @name: str name of dog
 * @age: float age of dog
 * @owner: str owner
 *
 * Description: Defines dog properties as a struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
