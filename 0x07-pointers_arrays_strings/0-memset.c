#include "holberton.h"

/**
 * _memset - The function fills the first n bytes of the indicated memory
 * area s with the constant byte b
 *
 * @s: This is a pointer to the memory block to fill.
 * @b: is the constant byte.
¨* @n: the first bytes of the memory area.
 * Return: return the pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
		s[i] = b;

	return (s);
}
