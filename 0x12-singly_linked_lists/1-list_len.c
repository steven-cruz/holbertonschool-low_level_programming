#include "lists.h"

/**
 * list_len - numer of elements in a linked
 * @h: pointer to node struct
 * Return: Always Successful
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp = NULL;
	unsigned int i = 0;

	tmp = h;

	while (tmp != NULL)
	{
		tmp  = tmp->next;
		i++;
	}
	return (i);
}
