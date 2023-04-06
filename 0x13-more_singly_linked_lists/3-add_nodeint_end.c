#include "lists.h"

#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Is a pointer to a pointer to the first node in the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

		temp->next = newNode;
	}

	return (newNode);
}
