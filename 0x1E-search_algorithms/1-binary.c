#include "search_algos.h"

/**
 * print_array - Function to print contents of array.
 * @array: pointer to array to be printed.
 * @size: size of array to be printed of type size_t
 * Return: always successful.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Search in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0 && i < size)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - function to perform binary search.
 * @array: pointer to array to be searched.
 * @size: size of arrya to be searched.
 * @value: value to be searched for.
 * Return: index(i) of value if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start;
	size_t mid;
	size_t end;

	if (array)
	{
		start = 0;
		end = size - 1;

		while (start <= end)
		{
			print_array(array + start, end + 1 - start);
			mid = (start + end) / 2;
			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
