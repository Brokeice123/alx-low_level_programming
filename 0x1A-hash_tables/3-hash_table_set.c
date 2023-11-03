#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: the hash table to add the key to
 * @key: the key to add to the table
 * @value: the value to add to the table
 *
 * Return: 1 if it succeeded, 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
