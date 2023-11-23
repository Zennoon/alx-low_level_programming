#include <stdio.h>
#include "main.h"

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
 * binary_to_uint2 - Returns decimal representation of a given binary number
 * @b: The binary number as a string
 *
 * Return: The decimal form of b
 */
unsigned int binary_to_uint2(const char *b)
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

/**
 * calc_power - Returns base ** exp
 * @base: The base of the exponentiaition operation
 * @exp: The exponent
 *
 * Return: base ** exp
 */
unsigned int calc_power(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;

	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * binary_to_uint - Returns the decimal representation of a given binary number
 * @b: The binary number as a string
 *
 * Return: The decimal form of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec = 0;

	if (b == NULL || !is_valid_binary(b))
	{
		return (dec);
	}
	len = _strlen(b);
	while (*b)
	{
		len--;
		if (*b == '1')
		{
			dec += calc_power(2, len);
		}
		b++;
	}
	return (dec);
}
