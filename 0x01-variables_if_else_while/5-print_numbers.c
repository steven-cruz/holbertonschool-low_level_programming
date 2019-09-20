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
	int c;

	c = 0;
	while (c <= 9)
	{
		printf("%d", c);
		c = c + 1;
	}
	printf("\n");
	return (0);
}
