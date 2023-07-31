#include "lists.h"

/**
 *free_listint - a function that frees a listint_t list.
 *@head: Pointer to the headof the list listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
