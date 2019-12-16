#include "lists.h"

/**
 * add_dnodeint - function to add node at the head
 * @head: double pointer.
 * @n: int of const.
 * Return: double linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));


	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}
