#include "hash_tables.h"
/**
 * hash_table_get - retrieves value
 * @ht: hash table
 * @key: key to test
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int check, i;
	char *value;

	check = 0;
	for (i = 0, ht->array[i], i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			check = 1;
			value = strdup(ht->array[i]->value);
		}
	}
	if (check == 0)
	{
		return (NULL);
	}

	return (value);
}
