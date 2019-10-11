#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: result of the sqare root of n
 */

int _sqrt_recursion(int n)
{
	int result = 0;

	result = _fact(n, 0);
	return (result);
}

/**
 * _fact - calculate the sqare root of a number
 * @n: integer
 * @x:integer
 * Return: result of the sqare root of n
 */

int _fact(int n, int x)
{
	int result = 0;

	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);

	result = _fact(n, x + 1);
	return (result);
}
