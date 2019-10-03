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
	int j = 0;
	int i;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + j] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
