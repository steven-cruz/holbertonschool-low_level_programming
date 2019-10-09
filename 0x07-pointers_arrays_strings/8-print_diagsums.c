#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: the int matrix
 * @size: the string to find.
 * Return: the quantity of bytes contents.
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i, j;

	for  (i = 0; i < (size * size); i = i + size + 1)
	{
		d1 += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j = j + size - 1)
	{
		d2 += a[j];
	}
	printf("%d, %d\n", d1, d2);
}
