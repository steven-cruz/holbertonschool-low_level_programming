#include <stdio.h>

 /**
  * main - the programm that prints the name
  * @argc: the number of arguments.
  * @argv: the array that contains the arguments.
  * Return: 0.
  */

int main(int argc, char *argv[])
{
        int i = 0;

        for (; i < argc; i++)

		printf("%s\n", argv[i]);

        return (0);
}
