#include "main.h"

/**
 * string_toupper - Changes each lowercase letter in a string to uppercase
 * @s: The string to be manipulated
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *s)
{
	char *ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (s);
}
