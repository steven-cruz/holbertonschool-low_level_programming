#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - change
 * @k: take a pointer, string.
 * Return: k
 */
char *string_toupper(char *k)
{
	int size;

	for (size = 0; k[size] != '\0'; size++)
	{
		if (k[size] >= 96 && k[size] <= 123)
		{
			k[size] = k[size] - 32;
		}
	}
	return (k);
}
