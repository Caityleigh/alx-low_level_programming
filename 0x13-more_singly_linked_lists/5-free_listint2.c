#include "lists.h"

#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A double pointer to the first node in the listint_t list.
 * desc: Sets the head to NULL.
 */

void free_listint2(listint_t **head)

{
	listint_t *current;

	if (head == current)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;

		free(current);
	}
	*head = NULL;
}
