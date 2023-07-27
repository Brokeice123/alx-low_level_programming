#include "lists.h"
#include <string.h>

/**
 *_strlen - Returns the length of a string
 *@s: The string being used
 *Return: Returns the length of the string
 */

int _strlen(const char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	return (len);
}

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: Head of the list_t
 *@str: Pointer to the value to insert in the new element
 *
 *Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *current_node;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
		return (NULL);

	new_node->len = _strlen(new_node->str);

	new_node->next = NULL;

	current_node = *head;
	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}
