#include "holberton.h"

/**
 * print_numbers - numbers the 0 to 9.
 * return: prints the numbers, from 0 to.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(48+a);
	}
	_putchar('\n');
}
