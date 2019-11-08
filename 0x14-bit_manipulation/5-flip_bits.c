#include "holberton.h"

/**
 * flip_bits - function to return number of bits.
 * @n: unsigned long int type.
 * @m: unsigned long int type.
 * Return: count of set bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, count = 0;

	d = n ^ m;
	while (d)
	{
		if (d & 1)
			count++;
		d >>= 1;
	}
	return (count);
}
