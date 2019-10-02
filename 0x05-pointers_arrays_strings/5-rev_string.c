#include "holberton.h"

/**
 * rev_string -  rints a string rev
 * @s:take a pointer, string.
 * Return: void
 */
void rev_string(char *s)
{
	int i, size, cont;
	char temp;

	cont = 0;
	for (size = 0; s[size] != '\0'; size++)
	{
	}
	for (i = size - 1; cont < i; i--)
	{
		temp = s[cont];
		*(s + cont) = s[i];
		s[i] = temp;
		cont++;

	}
}
