#include "holberton.h"

/**
 * _puts_recursion - It is a function called itself
 * @s: is the pointer that has the address of the variable to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s == '\0')
		_putchar('\n');

	else
		_puts_recursion(s + 1);
}
