#include "holberton.h"

/**
 * print_last_digit - Print the last digit of an integer.
 * @n: Integer to extract the last digit.
 * Return: Return the last digit of an integer.
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
		digit = digit * -1;
	_putchar(digit + 48);
	return (digit);
}
