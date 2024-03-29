#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node to the beginning
 * of our linked list.
 *
 * @head: A pointer to the head pointer to the first node in
 * our linked list.
 * @n: The integer for new node
 *
 * Return: The address of the new node, otherwise NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
