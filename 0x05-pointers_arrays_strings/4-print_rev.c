#include "holberton.h"

/**
 * print_rev -  rints a string rev
 * @s:take a pointer, string.
 * Return:string
 */

void reverse_array(int *a, int n)
{
	int size, tmp;

	size = 0;
	n--;

	while (size < n)
	{
		tmp = a[size];
		a[size] = a[n];
		a[n] = tmp;
		size++;
		n--;
	}
}
