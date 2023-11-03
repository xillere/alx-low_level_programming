#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of ther hashtable
 *
 * Return: pointer to new hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
