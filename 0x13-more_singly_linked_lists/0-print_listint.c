#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list.
 * @h: Pointer to the head of the listint_t list.
 * Return: Number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_number++;
		h = h->next;
	}
	return (node_number);
}
