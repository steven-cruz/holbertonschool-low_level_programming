#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: this the string.
 * @accept: Set of characteres to find in s.
 *
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);

}
