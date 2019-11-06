#include "lists.h"

/**
 * free_listint - function that free a list.
 * @head: pointer to struct.
 * Return: Always successful.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
