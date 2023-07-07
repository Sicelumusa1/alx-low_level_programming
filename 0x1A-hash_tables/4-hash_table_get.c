#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element, NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int table_slot;
	hash_node_t *entry;

	if (ht == NULL)
	{
		return (NULL);
	}

	table_slot = key_index((unsigned char *)key, ht->size);

	/*try find a valid table slot*/
	entry = ht->array[table_slot];

	/*if no slot found there is no entry*/
	if (entry == NULL)
	{
		return (NULL);
	}

	/* Iterate trhough each entry in the slot*/
	while (entry != NULL)
	{
		/* if the value is found return it*/
		if (strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}

		/*Move on to the next key if available*/
		entry = entry->next;
	}

	return (NULL);
}
