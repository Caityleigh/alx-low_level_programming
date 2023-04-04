#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 *
 * @h: A pointer to the head of listint_t list.
 * Return: The number of elements in a  list.
 */

size_t listint_len(const listint_t *h)
{
	size_t list_length = 0;

	while (h != NULL)
	{
	list_length++;
	h = h->next;
	}

	return (list_length);


}
