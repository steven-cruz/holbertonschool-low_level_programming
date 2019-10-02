#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n .
 * @a: take a pointer, string.
 * @n: take a int
 * Return:string
 */
void print_array(int *a, int n)
{
	int size;

	for (size = 0; size < n; size++)
	{
		printf("%d", a[size]);
		if (size < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
