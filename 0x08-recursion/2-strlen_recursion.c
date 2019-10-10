#include "holberton.h"

/**
 * _strlen_recursion - this is function that returns the length of a string.
 * @s: is the pointer that contains the address of the string
 * Return: return the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _sstrlen_recursion(s + 1));
}
