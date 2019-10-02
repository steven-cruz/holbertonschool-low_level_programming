include "holberton.h"

/**
 * puts_half - print only % 2 = 0.
 * @str: take a pointer, string.
 * Return:string
 */
void puts_half(char *str)
{
	int size, cont;

	for (size = 0; str[size] != 0; size++)
	{
	}
	if (size % 2 != 0)
		size++;
	for (cont = size / 2; str[cont] != 0; cont++)
	{
		_putchar(str[cont]);
	}
	_putchar('\n');
}
