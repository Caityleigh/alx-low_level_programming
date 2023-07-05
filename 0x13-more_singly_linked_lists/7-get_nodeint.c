#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that locates node in our
 * linked list.
 *
 * @head: A pointer to the head of our linked list.
 * @index: Index of the node to be located in our linked list.
 * indices start at 0.
 *
 * Return: The located node, otherwise NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (NULL);
}
