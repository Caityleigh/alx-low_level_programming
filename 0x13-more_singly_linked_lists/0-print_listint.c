#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 * in our linked list.
 *
 * @h: Is a pointer to the head of list_t list.
 *
 * Return: Returns the number of nodes within the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;


	if (h == NULL)
	{
		return (0);
	}



	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
