#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to head node.
 * Return: Always successful.
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
