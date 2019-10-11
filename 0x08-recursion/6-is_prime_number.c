#include "holberton.h"

/**
 * is_prime_number - check if a number is prime
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	int x = 2;

	x = prime(n, x);
	return (x);
}

/**
 * _is_Prime - check if a number is prime
 * @n: int
 * @x: int
 * Return: returns 1 if the input integer is a prime number, otherwise return 0.
 */

int prime(int n, int x)
{
	int p = 0;

	if (n == x)
		return (1);

	if (n % x == 0 || n <= 1)
		return (0);
	p = prime(n, x + 1);
	return (p);
}
