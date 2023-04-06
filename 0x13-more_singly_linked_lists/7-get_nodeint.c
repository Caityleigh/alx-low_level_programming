#include "lists.h"

#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that locates a given
 * node of a listint_t linked list.
 *
 * @head: A pointer to the head of listint_t list.
 * @index: The index of node to be located (starting at 0)
 *
 * Return: NULL if node does not exist, or the located
 * node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int data;

	for (data = 0; data < index; data++)

	{
		if (head == NULL)
		{
		return (NULL);
		}

		head = head->next;
	}

	return (head);

}
