#include "holberton.h"

/**
 * _strlen - calculate the length of a string.
 * @s: String.
 * Return: Length of s.
 */

int _strlen(char *s)
{
	int len = 0;
	char c;

	for (c = 0; (*(s + c)) != '\0'; c++)
		len++;
	return (len);
}
