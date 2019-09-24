#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: Integer to calculate te absolute value.
 * Return: Nothing
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
