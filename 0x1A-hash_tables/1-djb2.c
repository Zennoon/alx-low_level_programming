#include "hash_tables.h"

/**
 * hash_djb2 - Produces an integer hash for a given string key
 * @str: The string to produce a hash for
 *
 * Return: A hash for the given string key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str)
	{
		hash = ((hash << 5) + hash) + *str;
		str++;
	}
	return (hash);
}
