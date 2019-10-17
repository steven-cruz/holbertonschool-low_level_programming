#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: take a int width
 * @height: take a int height
 * Return: pointer to thearray
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	return (p);
}
