#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: contains the number of bytes
 * Return: 1) If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	a = malloc((sizeof(char) * (i + n) + 1));
	if (a != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			a[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			a[i] = s2[j];
			i++;
		}
		a[i] = '\0';
		return (a);
	}
	else
	{
		return (NULL);
	}
}
