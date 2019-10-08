#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

for (i = 0; *(s + i) != c && *(s + i) != '\0'; i++)
{
	if (*(s + i) != c)
		return (0);
	else
		return (s + i);
}
}
