#include "holberton.h"

/**
 * print_sign - Print the sign of a number.
 * @n: is the digit to check.
 * Description: Print on standart output the sign of a number and return the
 * same.
 * Return: 1 if is greater than zero, 0 is is 0, -1 if is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
