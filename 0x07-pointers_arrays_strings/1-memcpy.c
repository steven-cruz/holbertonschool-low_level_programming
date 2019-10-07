#include "holberton.h"

/**
 *
 *
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
