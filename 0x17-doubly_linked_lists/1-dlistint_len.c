#include "lists.h"

/**
 *
 *
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
