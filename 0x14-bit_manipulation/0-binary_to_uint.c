#include "main.h"
#define NULL ((void *) 0)
/**
 * _strlen - Returns the length of a given string
 * @s: The string whose length is returned
 *
 * Return: The length of s
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s != NULL && *s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * is_valid_binary - Checks if a given string is a valid binary number
 * @s: The string to check
 *
 * Return: 1 if s is valid, 0 otherwise
 */
unsigned int is_valid_binary(const char *s)
{
	unsigned int is_valid = 1;

	while (s != NULL && *s)
	{
		if (*s < 48 || *s > 49)
		{
			is_valid = 0;
			break;
		}
		s++;
	}
	return (is_valid);
}

/**
 * binary_to_uint - Returns the decimal representation of a given binary number
 * @b: The binary number as a string
 *
 * Returns: The decimal form of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b == NULL || !is_valid_binary(b))
	{
		return (dec);
	}
	while (*b)
	{
		dec *= 2;
		if (*b == '1')
		{
			dec += 2;
		}
		b++;
	}
	return (dec >> 1);
}
