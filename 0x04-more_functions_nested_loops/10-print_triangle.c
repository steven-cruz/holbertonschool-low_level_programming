#include "holberton.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int col, line;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (line = 0; line < size; line++)
	{
		for (col = 0; col < size; col++)
			(col >= size - line - 1) ? _putchar('#') : _putchar(' ');
		_putchar('\n');
	}
}
