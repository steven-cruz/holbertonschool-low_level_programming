#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: Number of arguments (including name of file).
 * @argv: Arguments of the function
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
