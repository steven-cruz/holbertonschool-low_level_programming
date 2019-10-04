#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array -rev
 * @a: take a pointer, string.
 * @n: take a variable int
 * Return: void.
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
