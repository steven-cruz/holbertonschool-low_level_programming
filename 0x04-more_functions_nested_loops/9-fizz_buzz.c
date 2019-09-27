#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Description: Prints the numbers from 1 to 100, followed by a new line. But
 * for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both three
 * and five.
 * print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 != 0 && num % 5 != 0)
		{
			printf("%i", num);
		}
		else
		{
			if (num % 3 == 0)
				printf("Fizz");
			if (num % 5 == 0)
				printf("Buzz");
		}
		(num == 100) ? putchar('\n') : putchar(' ');
	}
	return (0);
}
