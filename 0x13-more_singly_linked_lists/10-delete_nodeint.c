#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node.
 * @head: pointer to head.
 * @index: point fo node deletion.
 * Return: Always successful.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tmp1;
	unsigned int c =  0;

	if (head  == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (c != (index - 1))
	{
		tmp = tmp->next;
		c++;
		if (tmp == NULL)
			return (-1);
	}
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);
	return (1);
}
