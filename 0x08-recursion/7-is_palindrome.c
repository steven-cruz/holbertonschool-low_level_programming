#include "holberton.h"

/**
 * is_palindrome - check if a string is empty or not.
 * @s: it's a pointer
 * Return: 1 o 0
 */

int is_palindrome(char *s)
{
	int c = rec(s);

	if (c == 0)
		return (1);
	else
		return (pal(s, c));
}

/**
 * pal - funcion
 * @s: it's a pointer
 * @c: take a int
 * Return: 0 or 1
 */

int pal(char *s, int c)
{
	if (c <= 1)
		return (1);
	else if (*s == *(s + c - 1))
		return (pal(s + 1, c - 2));
	else
		return (0);
}

/**
 * rec - is the cont
 * @s: take a pointer
 * Return: 0 or rec
 */

int rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (rec(s + 1) + 1);
}
