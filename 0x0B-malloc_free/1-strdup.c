#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: the string.
 * Return: void
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int s = 0;

	if (str == NULL)
		return (NULL);

	while(str[i] != '\0')
	{
		i++;
	}
	a = malloc(i + 1);
	if (a == NULL)
		return (NULL);
	for (; s < i; s++)
		a[s] = str[s];
	a[s] = '\0';
	return (a);
}
