#include "holberton.h"

/**
 * _strcat - Function for connect two strings
 * @dest: first string.
 * @src: second string.
 *
 * Return: is It is the result of the operation.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
