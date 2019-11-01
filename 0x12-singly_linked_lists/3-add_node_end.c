#include "lists.h"

/**
 * add_node_end - function to add new node at the end of a list
 * @head: pointer of NULL
 * @str: pointer to a string
 * Return: length
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *b = *head;
	unsigned int counter = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	while (str[counter] != '\0')
		counter++;
	tmp->len = counter;

	if (*head == NULL)
	{
		tmp->next = *head;
		*head = tmp;
	}
	else
	{
		while (b != NULL)
		{
			if (b->next == NULL)
			{
				b->next = tmp;
				b = tmp;
				return (tmp);
			}
			b = b->next;
		}
	}
	return (tmp);
}
