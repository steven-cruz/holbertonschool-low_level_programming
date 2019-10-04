#include "holberton.h"
#include <stdio.h>

/**
 * leet - change
 * @k: take a pointer, string.
 * Return: k encryptedi
 */
char *leet(char *k)
{
	int i, j;
	char *c1 = "aeotlAEOTL";
	char *c2 = "4307143071";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (k[i] == c1[j])
			{
				k[i] = c2[j];
			}
		}
	}
	return (k);
}
