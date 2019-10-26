#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: const unsigned int type
 * Return: all sums.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list addlist;

	va_start(addlist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(addlist, unsigned int);
	}
	va_end(addlist);

	return (sum);
}
