#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: String to searching
 * @needle: substrind to find in haystack
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;
	char *h = haystack, *n = needle;

	while (needle[i] != '\0')
		i++;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		for (j = 0; j <= i && *h == *n && *h != '\0' && *n != '\0'; j++)
		{
			h++;
			n++;
		}
		if ((j - i) == 0)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
