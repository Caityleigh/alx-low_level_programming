#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - A function that calculates the sum
 * of all data (n) of our linked list.
 *
 * @head: A pointer to the head of our linked list.
 *
 * Return: The sum of all the data, otherwise 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new = head;

	if (head == NULL)
	{
		return (0);
	}

	while (new)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}
