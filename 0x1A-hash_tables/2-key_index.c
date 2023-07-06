#include "hash_tables.h"

/**
 * key_index - provides the index of the key
 * @key: key to use to access values contained in hash table
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;
	
	hash = hash_djb2(key);
	index = hash % size; 
	return (index);
}
