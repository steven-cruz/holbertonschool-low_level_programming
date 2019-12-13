#include "lists.h"

/**
 * print_dlistint - print the elements of a doubly linked list
 * @h: pointer of const
 * Return: list and number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
       int i = 0;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next;
                i++;
        }
        return (i);
}
