#include "lists.h"


/*
 * get_nodeint_at_index - Locates a given node of
 * a listint_t list.
 *
 * @head: A pointer to the head in the listint_t list.
 * @index: The index of the node to locate (Starting at 0)
 *
 * Return: The located node, or NULL if
 * it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	listint_t *position = head;
	unsigned int data = 0;

	while (position != NULL && data < index)
	{
		position = position->next;
		data++
	}
	return (position);
}

