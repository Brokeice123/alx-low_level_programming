#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: Pointer to the head of the list listint_t
 *@n: Value of the new node
 *
 *Return: Address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
