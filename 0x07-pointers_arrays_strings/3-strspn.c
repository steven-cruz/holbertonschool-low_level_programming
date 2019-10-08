#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: this is string.
 * @accept: Take a pointer.
 * Return: count.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
	}
	return (count);
}
