#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int b
 * Return: 1) Returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	else
	{
		exit(98);
	}
	free(p);
}
