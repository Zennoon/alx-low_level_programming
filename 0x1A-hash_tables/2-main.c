#include "hash_tables.h"

/**
 * main - The entry point of the program
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	char *s;
	unsigned long int hash_table_array_size = 1024;

	s = "c";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	s = "Bob";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	return (EXIT_SUCCESS);
}
