#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: number initial of the count.
 * Description: Print all natural numbers from n to 98, no matter if n is
 * positive, negative, bigger or lesser than 98.
 * Return: Nothing
 */
void print_to_98(int n)
{
	int count;

	if (n < 98)
		for (count = n; count < 98; count++)
			printf("%i, ", count);
	else
		for (count = n; count > 98; count--)
			printf("%i, ", count);
	printf("98\n");
}
