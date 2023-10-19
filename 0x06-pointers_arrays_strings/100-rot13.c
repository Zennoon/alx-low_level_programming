#include <stdio.h>
#include "main.h"

/**
 * rot13 - Encodes/Decodes a given string using ROT13 encoding
 * @s: The string to be encoded
 *
 * Return: The encoded/decoded string
 */
char *rot13(char *s)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoded[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len = sizeof(letters) / sizeof(char);
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = encoded[j];
				break;
			}
		}
	}
	return (s);
}
