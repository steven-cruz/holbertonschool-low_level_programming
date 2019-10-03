#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Function to copy a given string
 * @dest: First parameter given to function
 * @src: Second parameter given to function
 * Return: Pointer to first parameter given
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
