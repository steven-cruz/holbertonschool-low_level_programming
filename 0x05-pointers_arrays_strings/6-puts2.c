#include "holberton.h"

/**
 * puts2 - print only % 2 = 0.
 * @str: take a pointer, string.
 * Return:string
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
