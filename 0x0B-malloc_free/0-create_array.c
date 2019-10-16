#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 *
 * @c: array start value
 * @size: array size
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size);

	if (size == 0)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (; i < size; i++)
		a[i] = c;
	return (a);
}
