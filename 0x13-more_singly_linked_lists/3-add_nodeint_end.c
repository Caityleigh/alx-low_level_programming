#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of our linked list.
 *
 * @head: Pointer to the address of the head of our linked list.
 * @n: The integer that will contain the new node.
 *
 * Return: Address of our new node, otherwise NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
