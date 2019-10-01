#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: frist pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
