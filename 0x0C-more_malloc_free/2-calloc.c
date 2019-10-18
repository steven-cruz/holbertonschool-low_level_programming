#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: 1) If nmemb or size is 0, then _calloc returns NULL.
 *         2) If malloc fails, then _calloc returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
			*(ptr + i) = 0;
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
