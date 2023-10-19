#include "main.h"

/**
 * leet - Replaces certain characters in a string with look alike digits
 * @s: The string to be manipualted
 *
 * Dscription: Checks each character in the string and replaces:
 * 'A'/'a' with 4, 'E'/'e' with 3, 'O'/'o' with 0, 'T'/'t' with 7, and
 * 'L'/'l' with 1
 * Return: A pointer to s
 */
char *leet(char *s)
{
	char s1[] = "AEOTL";
	char s2[] = "aeotl";
	char repl[] = "43071";
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == s1[j] || s[i] == s2[j])
			{
				s[i] = repl[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
