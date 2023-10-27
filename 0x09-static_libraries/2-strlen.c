#include "main.h" /* Not really needed */

/**
 * _strlen - Returns the length of a null terminated string
 * @s: The string whose length will be returned
 *
 * Description: Uses pointer arithmetic to count the length of characters
 * until the null terminator
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int len;
	char *ptr;

	len = 0;
	ptr = s;
	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}
