#include "lists.h"

/**
 * pop_listint - function to remove node.
 * @head: pointer to head node.
 * Return: Always successful.
 */

int pop_listint(listint_t **head)
{
	listint_t *fst = NULL;
	int v = 0;

	if (*head == NULL)
	{
		return (0);
	}
	fst = *head;
	v = fst->n;
	*head = fst->next;
	free(fst);
	return (v);
}
