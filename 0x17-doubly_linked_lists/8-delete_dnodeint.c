#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: head of the list
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);

		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (-1);

	tmp->next = tmp->next->next;
	free(tmp->next->prev);
	tmp->next->prev = tmp;

	return (1);
}
