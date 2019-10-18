#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: 1) If min > max, return NULL.
 *         2) If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		ptr[i] = i + min;

	return (ptr);
}
