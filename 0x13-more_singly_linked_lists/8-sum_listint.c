#include "lists.h"

#include <stdio.h>

#include <stdlib.h>


/**
 * sum_listint - Returns the sum of all nodes of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data of the list, if empty - return 0.
 */

int sum_listint(listint_t *head)

{
	int result = 0;
	listint_t *position = head;

	while (current != NULL)
	{
		result += position->n;
		position = position->next;
	}
	return (result);
}
