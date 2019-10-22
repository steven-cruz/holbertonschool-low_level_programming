#include "dog.h"

/**
 * init_dog - is a function taht initilize a variable of type struct dog.
 * @d: pointer.
 * @name: name of pet.
 * @age: age of pet.
 * @owner: owner pet.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
