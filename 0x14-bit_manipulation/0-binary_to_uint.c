#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to char string
 * Return: Always successful
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	unsigned int b2 = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		c <<= 1;
		if (b[i] == '1')
		{
			c ^= b2;
		}
		i++;
	}
	return (c);
}
