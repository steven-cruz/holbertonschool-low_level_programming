#include "holberton.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
