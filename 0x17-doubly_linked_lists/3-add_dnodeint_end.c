#include "lists.h"
/**
 * add_dnodeint_end - function to add node to the end.
 * @head: double pointer of dlistint_t.
 * @n: int of const.
 * Return: node if successful or NULL if empty
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	node->prev = temp;
	temp->next = node;
	return (node);
}
