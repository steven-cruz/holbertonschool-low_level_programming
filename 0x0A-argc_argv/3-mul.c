#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: integer number.
 * @argv: integer number.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");

	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
