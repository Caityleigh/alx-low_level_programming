#include "lists.h"

#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node's element.
 * @head: A double pointer to the first node in the listint_t list.
 *
 * Return:The head nodes data, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)

{
	int data;
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	nextNode = (*head)->next;
	free(*head);
	*head = nextNode;

	return (data);
}
