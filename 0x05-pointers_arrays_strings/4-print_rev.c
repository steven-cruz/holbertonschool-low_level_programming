#include "holberton.h"

void print_rev(char *s)
{
	int i, j;

	for (j = 0; s[j] != 0; j++)
	{
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
