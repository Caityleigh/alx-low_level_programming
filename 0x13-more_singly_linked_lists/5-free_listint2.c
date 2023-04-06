#include "lists.h"

#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A double pointer to the first node in the listint_t list.
 */

void free_listint2(listint_t **head)

{
	listint_t *position;

	if (head == position)
	{
		return;
	}

	while (*head != NULL)
	{
		position = *head;
		*head = (*head)->next;

		free(position);
	}
	*head = NULL;
}
