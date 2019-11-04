#include "lists.h"

/**
 * listint_len - number of elements in a linked list.
 * @h: type of node struct
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
