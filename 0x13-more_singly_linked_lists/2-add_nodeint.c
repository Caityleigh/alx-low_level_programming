#include "lists.h"

#include <stdlib.h>

/**
 * add_nodeint - Adds a new node to the start of the listint_t list.
 * @head: Pointer to a pointer to the head node of list.
 * @n: Value stored in the new node.
 * Return: returns adress of the new data, or Null if unsuccessful.
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	/* Allocates memory for node */

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
	return (NULL);
}

	/* Initialize the new node */

new_node->n = n;
new_node->head = *head;

	/* Set head pointer to new node */

*head = new_node;

	return (new_node);
}
