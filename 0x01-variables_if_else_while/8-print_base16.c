#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int m;

	c = 'a';
	m = 0;

	while (m <= 9)
	{
		putchar(m % 10 + '0');
		m++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
