#include "lists.h"

#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list.
 * @head: A pointer to the first node in the listinit_t list.
 *
 * Return: Void
 */

void free_listint(listint_t *head)

{
	listint_t *position;

	while (head != NULL)
	{
		position = head;
		head = head->next;

		free(position);
	}

}
