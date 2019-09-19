#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c = c + 1;
		}
		else
		{
			putchar(c);
			c = c + 1;
		}
	}
	putchar('\n');
	return (0);
}
