#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: this a pointer.
 * @c: take a char.
 * Return: return c o NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c && *(s + i) != '\0')
		i++;
	if (*(s + i) != c)
		return (0);
	else
		return (s + i);
}
