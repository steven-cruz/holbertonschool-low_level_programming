#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	return (0);
}
