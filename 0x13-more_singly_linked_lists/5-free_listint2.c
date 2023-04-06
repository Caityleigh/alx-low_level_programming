#include "lists.h"

#include <stdlib.h>


/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)

{
	if (head == NULL)
	{
		return;
	}

	listint_t *current = *head;

	while (current != NULL)
	{

		listint_t *tmp = current;

		current = current->next;

		free(tmp);

	}
	*head = NULL;
}
