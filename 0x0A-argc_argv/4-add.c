#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int cont = 0;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (; i < argc; i++)
		{
			cont = 0;
			for (; argv[i][j] != '\0'; j++)
			{
				if ((int)argv[i][j] < 48 || (int)argv[i][j] > 57)
				{
					printf("Error\n");
					return (0);
				}
				cont = 1;
			}
			if (cont == 1)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
