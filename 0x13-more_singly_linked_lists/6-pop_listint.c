#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 * our linked list.
 *
 * @head: A pointer to address of the head of our linked list.
 *
 * Return: The head nodes datta (n), otherwise 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (x);
}
