#include "main.h"

/**
 * is_separator - Checks if a given character is an element of a predefined
 * list of word separators
 * @c: The character to be checked
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char seps[] = {' ', '\t', '\n', ',', ';', '.',
		    '!', '?', '"', '(', ')', '{', '}'};
	int len = sizeof(seps) / sizeof(char);
	int is_sep = 0;
	int i;

	for (i = 0; i < len; i++)
	{
		if (c == seps[i])
		{
			is_sep += 1;
			break;
		}
	}
	return (is_sep);
}

/**
 * cap_string - Capitalizes a given string (changes the first letter of each
 * to uppercase)
 * @s: The string to be manipulated
 *
 * Description: There are predefined word separators given. Each time these are
 * encountered, if the next character is a letter, it is the start of a new
 * word, so the function capitalizes it
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (is_separator(s[i]) && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] -= 32;
			i++;
		}
	}
	return (s);
}
