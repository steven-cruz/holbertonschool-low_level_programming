#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: pointer to head of sctruct listint_t type.
 * Return: Always successful
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp1 = NULL;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
	*head = NULL;
}
