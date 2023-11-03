#include <hash_tables.h>
/**
 * key_index - return the index at which the key/value is stored in the ht array
 * @key: key to be inserted in the hash function
 * @size: size of the array hash table
 *
 * Return: index of key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
