#include "lists.h"

/**
 * insert_nodeint_at_index - insters a new node at a given position.
 * @head: pointer to head of struct.
 * @idx: unsigned int for location to add node.
 * @n: int type for value of new node.
 * Return: Always successful.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (idx > 1)
	{
		if (h->next == NULL)
			return (NULL);
		h = h->next;
		idx--;
	}
	new->next = h->next;
	h->next = new;
	return (new);
}
