#include "holberton.h"

/**
 * main - Print a string using the provided function _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cad[] = "Holberton\n";
	unsigned int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(cad[i]);
	}

	return (0);
}
