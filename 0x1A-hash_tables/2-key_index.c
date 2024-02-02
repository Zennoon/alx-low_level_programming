#include "hash_tables.h"

/**
 * key_index - Returns the index at which to insert a key-value pair to a hash
 * table of given size given the key
 * @key: The key of the key-value pair to insert to the table
 * @size: The size of the hash table
 *
 * Description: This function utilizes the hash_djb2 hashing function in
 * 1-djb2.c to get the hashing of the key. This function then converts this hash
 * to an index that can be used for the table of the given size
 * Return: An index at which to insert the key-value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
