#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - It is a new type of structure.
 * @name: is the name of the pet.
 * @age: age of the pet.
 * @owner: Pet owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
