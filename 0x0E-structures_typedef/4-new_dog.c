#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: name of pet.
 * @age: age of pet.
 * @owner: owner pet.
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int size_1, size_2, i, j;

	if (name == NULL)
		if (owner == NULL)
			return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (size_1 = 0; name[size_1] != '\0'; size_1++)
	{
	}
	for (size_2 = 0; owner[size_2] != '\0'; size_2++)
	{
	}
	d->name = malloc(sizeof(char) * size_1 + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < (size_1 + 1); i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(sizeof(char) * size_2 + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (j = 0; j < (size_2 + 1); j++)
		d->owner[j] = owner[j];
	return (d);
}
