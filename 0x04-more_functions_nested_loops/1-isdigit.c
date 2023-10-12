#include "main.h" /* Not really needed */

/**
 * _isdigit - Checks whether a given character is a digit (0-9) or not
 * @c: The character to be checked
 * Description: The function checks if c is between '0' and '9' (the characters
 * , not the actual digits). If it is, it's a digit
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
