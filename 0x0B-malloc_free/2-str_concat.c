#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * Return: length of a string.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (l = 0, k = 0; l < (i + j + 1); l++)
	{
		if (l < i)
			*(a + l) = *(s1 + l);
		else
			*(a + l) = *(s2 + (k++));
	}

	return (a);
}
