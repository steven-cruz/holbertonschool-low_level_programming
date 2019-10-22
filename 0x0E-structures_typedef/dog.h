#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - It is a new type of structure.
 * @name: is the name of the pet.
 * @age: age of the pet.
 * @owner: Pet owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
