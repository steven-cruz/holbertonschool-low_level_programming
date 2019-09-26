#include "holberton.h"

/**
 * isdigit - checks for a digit
 * @c :integer to evalue
 * return: returns 1 if c is a digit other return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);
}
