#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: pointer to array
 * @size: type of size_t typedef
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (action == NULL)
		return;

	if (size <= 0 || array == NULL)
		return;

	for (count = 0; count < size; count++)
	{
		(*action)(array[count]);
	}
}
