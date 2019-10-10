#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: is the variable that contains the number given.
 * Return: returns the facotorial of a given number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
