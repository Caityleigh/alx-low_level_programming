#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in our linked list.
 *
 * @h: The pointer to the first node in a linked list.
 *
 * Return: The number of elements in our list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
