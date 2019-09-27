#include "holberton.h"

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fuck = 612852475143;
	long int last = fuck;
	long int i = 3;

	while (i < last)
		if (last % i == 0)
			last /= i;
		else
			i++;
	printf("%li\n", last);

	return (0);
}
