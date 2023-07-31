#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given position.
 *@head: Pointer to the head element
 *@n: Value of the newnode
 *@idx: The specified index
 *
 *Return: The address of the new_node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *current;
	unsigned int i;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;


	current = *head;

	for (i = 0; i < idx; i++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
