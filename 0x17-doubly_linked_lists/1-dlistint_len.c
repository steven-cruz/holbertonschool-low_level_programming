#include "lists.h"

/**
 * dlistint_len - function the print number of elements in a linked
 * @h: pinter list.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
