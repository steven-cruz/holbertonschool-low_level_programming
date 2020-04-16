#include "search_algos.h"

/**
 * linear_search - function to perform linear search on array.
 * @array: pointer to array to be searched.
 * @value: value to be search inside array.
 * @size: size of array to be search of type size_t.
 * Return: index or value or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value ckecked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
