#include "holberton.h"

/**
 * print_times_table - print the tables of multiplication.
 * @n: Number of tables to print.
 * Return: Nothing
 */
void print_times_table(int n)
{
	int x, y, m;

	if (n > 15 || n < 0)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			m = x * y;
			if (y == 0)
			{
				_putchar('0');
				continue;
			}
			_putchar(',');
			_putchar(' ');

			if (m / 100 == 0)/* Prints hundreds */
				_putchar(' ');
			else
				_putchar((m / 100) + '0');

			if (m >= 100)
				_putchar(((m % 100) / 10) + '0');
			else if (m < 10)
				_putchar(' ');
			else
				_putchar(((m % 100) / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
