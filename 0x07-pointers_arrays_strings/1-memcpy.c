#include "holberton.h"

/**
 * _memcpy - the function copies n bytes from memory area
 * src to memory area dest.
 *
 * @src: is the origin of where the mummy copy will be made.
 * @dest: where the memory copy will be pasted.
 * @n: indicates the number of bytes to copy.
 * Return: returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
