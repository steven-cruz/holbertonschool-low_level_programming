#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)

				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar ('\n');
	}
}
