#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string recursively
 * @s: The string whose length is calculated
 *
 * Description: Length of s = 1 + Length of (s + 1) and Length of "" = 0
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	if (!*s) /* Base Case */
	{
		return (0);
	}
	return (1 + _strlen_recursion(s +  1));
}
