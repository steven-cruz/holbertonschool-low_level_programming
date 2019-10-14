#include <stdio.h>

/**
 * main - prints all arguments it recives.
 * @argc: number the arguments of the line of commant.
 * @argv: a array that contains the line arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
