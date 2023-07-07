#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add of update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	/* check if key already exists in the hash table*/
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	/*make new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* add new node at the beginning*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
