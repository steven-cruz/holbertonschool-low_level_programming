#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Holberton\n";

	int len1, len2;

	buf *c = createBuf();

	len1 = printf("%s", s);
	len2 = printString(c, s);
	printf("%d %d", len1, len2);
	return (0);
}
