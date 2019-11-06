#include "lists.h"

/**
 * get_nodeint_at_index - function that return index of node.
 * @head: pointer to head.
 * @index: index of node to be returned.
 * Return: Always successful.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == c)
		{
			tmp = head;
			return (tmp);
		}
		c++;
		head = head->next;
	}
	return (NULL);
}
