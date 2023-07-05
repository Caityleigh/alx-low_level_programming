#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - A function frees our linked list.
 *
 * @head: Pointer to the address of the head of our linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
