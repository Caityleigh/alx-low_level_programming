#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - A function thats frees a linked list.
 *
 * @head: Pointer to the head of our linked list that
 * is freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
