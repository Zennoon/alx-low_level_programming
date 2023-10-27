#include "main.h"

/**
 * _isupper - Checks whether a character is an uppercase letter or not
 * @c: The character to be checked
 * Description: The function compares the character (its ASCII code) with 'A'
 * and 'Z'. If it is in between, that means it is uppercase. Remember, char is
 * just a 1 byte integer in C.
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
