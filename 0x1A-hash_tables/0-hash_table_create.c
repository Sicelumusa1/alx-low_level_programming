#include "hash_tables.h"

/**
 * hash_table_create - create an array to be used a s hash table
 * @size: size of an array
 * Return: pointer to newly created table if successful, and NULL othertwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *H_table = NULL;
	unsigned long int i;

	/* Allocate memory for the table*/
	H_table = malloc(sizeof(hash_table_t));
	if (H_table == NULL)
	{
		return (NULL);
	}

	/*allocate memory for the table entries*/
	H_table->array = malloc(sizeof(hash_node_t *) * size);
	if (H_table->array == NULL)
	{
		return (NULL);
	}

	/*Set each entry to null*/
	for (i = 0; i < size; i++)
	{
		H_table->array[i] = NULL;
	}

	return (H_table);
}
