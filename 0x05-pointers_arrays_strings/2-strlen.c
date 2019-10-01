#include "holberton.h"

/**
 * _strlen - calculate the length of a string.
 * @s: String.
 * Return: Length of s.
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
