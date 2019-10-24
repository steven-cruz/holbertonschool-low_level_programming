#include "function_pointers.h"

/**
 * int_index - function to return index.
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: index number of cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
