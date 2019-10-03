#include "holberton.h"

/**
 * _strncat - function for concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: concatenates
 * Return: Return a pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = n;
	int i;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++, j++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
}
