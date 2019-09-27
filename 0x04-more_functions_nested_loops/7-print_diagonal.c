#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the charater /.
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (b = 0; b < n; b++)
	{
		for (a = 0; a < b; a++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
