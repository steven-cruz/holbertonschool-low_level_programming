#include "holberton.h"
/**
 * rot13 - Function to encode a string using rot13
 * @c: Parameter passed to the function to process
 * Return: Pointer to the encoded string
 */

char *rot13(char *c)
{
	int i, j;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (c[i] == c1[j])
			{
				c[i] = c2[j];
				break;
			}
		}
	}
	return (c);
}
