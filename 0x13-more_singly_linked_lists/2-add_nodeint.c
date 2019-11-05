#include "lists.h"

/**
 * add_nodeint - add a new node first
 * @head: typye of node struct pointer to head
 * @n: const int type
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fst = NULL;

	fst = malloc(sizeof(listint_t));
	if (fst == NULL)
		return (NULL);
	fst->n = n;
	fst->next = *head;
	*head = fst;
	return (*head);
}
