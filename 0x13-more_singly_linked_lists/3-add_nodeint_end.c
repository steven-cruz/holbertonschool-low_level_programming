#include "lists.h"

/**
 * add_nodeint_end - function that add node to the end.
 * @head: type of node struct pointer
 * @n: cost int type
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fst = NULL;
	listint_t *tmp = NULL;

	fst = malloc(sizeof(listint_t));
	if (fst == NULL)
		return (NULL);
	fst->n = n;
	if (*head == NULL)
	{
		*head = fst;
		fst->next = NULL;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = fst;
	fst->next = NULL;

	return (*head);
}
