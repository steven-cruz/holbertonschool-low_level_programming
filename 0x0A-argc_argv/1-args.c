#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number the arguments of the line of commant.
 * @argv: a array that contains the line arguments.
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
		return (0);
}
