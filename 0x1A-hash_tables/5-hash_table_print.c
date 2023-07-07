#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: is a hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!flag)
			{
				printf(", ");
			}
			printf("'%s' : '%s'", node->key, node->value);
			flag = 0;

			node = node->next;
		}
	}
	printf("}\n");
}
