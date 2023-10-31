#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Returns the length of a given string
 * @s: The string whose length is being computed
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int len;
	char *ptr;

	if (s == NULL)
	{
		return (0);
	}
	len = 0;
	ptr = s;
	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}

/**
 * argstostr - Concatenates all the arguments given to the program
 * @ac: Argument Count
 * @av: Argument Vector (a 1D array of command line arguments as strings)
 *
 * Return: The concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len;
	char *cat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += _strlen(av[i]);
	}
	cat = malloc(sizeof(char) * (total_len + 1 + ac));
	j = 0;
	if (cat != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			char *ptr;

			ptr = av[i];
			while (*ptr)
			{
				cat[j++] = *ptr;
				ptr++;
			}
			cat[j++] = '\n';
		}
		cat[j] = '\0';
	}
	return (cat);
}
