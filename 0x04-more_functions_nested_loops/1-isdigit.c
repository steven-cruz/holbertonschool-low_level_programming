#include "holberton.h"

/**
 * _isdigit - Check if a character is a digit.
 * @c: integer to evaluate
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);
}
