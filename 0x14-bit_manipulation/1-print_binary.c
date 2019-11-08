#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: contains the value to convert.
 */

void print_binary(unsigned long int n)
{
	unsigned long int c = 0, flag = 1, check = 0;
	unsigned int size = sizeof(n) * 8;

	while (c < size)
	{
		check = (n << 1);
		check >>= 1;
		if (n != check)
		{
			flag = 0;
			_putchar(49);
		}
		else if (!flag)
		{
			_putchar(48);
		}
		n <<= 1;
		c++;
	}
	if (flag == 1)
		_putchar(48);
}
