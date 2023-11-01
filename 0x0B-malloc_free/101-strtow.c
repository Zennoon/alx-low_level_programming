#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string, space as a separator
 * @s: The string whose words are counted
 *
 * Return: The number of words in s
 */
int count_words(char *s)
{
	int count;
	char *ptr;

	if (s == NULL)
	{
		return (0);
	}
	count = 0;
	ptr = s;
	if (*ptr != '\0' && (*ptr != ' ' && *ptr != '\t'))
	{
		count++;
	}
	while (*ptr)
	{
		if ((*ptr == ' ' || *ptr == '\t') &&
		    (*(ptr + 1) != '\0') &&
		    (*(ptr + 1) != ' ' && *(ptr + 1) != '\t'))
		{
			count++;
		}
		ptr++;
	}
	return (count);
}

/**
 * get_word_length - Counts the number of characters until a space character
 * @s: The string in which we are counting the length of a word
 *
 * Return: The length of the found word
 */
int get_word_length(char *s)
{
	int word_len;
	char *ptr;

	word_len = 0;
	ptr = s;
	while (*ptr)
	{
		if (*ptr != ' ' && *ptr != '\t')
		{
			word_len++;
		}
		else if (word_len > 0 && (*ptr == ' ' || *ptr == '\t'))
		{
			break;
		}
		ptr++;
	}
	return (word_len);
}

/**
 * strtow - Splits a string into words and returns an array of the words
 * @s: The string to be splitted
 *
 * Return: An array containing all the words in s as strings, and NULL as
 * the last element
 */
char **strtow(char *s)
{
	int word_cnt, i, j, k;
	char **arr;

	word_cnt = count_words(s);
	if (!word_cnt)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char *) * (word_cnt + 1));
	if (arr != NULL)
	{
		char *ptr;
		int word_len;

		ptr = s;
		for (i = 0; i < word_cnt; i++)
		{
			while (*ptr == ' ' || *ptr == '\t')
                        {
                                ptr++;
                        }
			word_len = get_word_length(ptr);
			arr[i] = malloc(sizeof(char) * (word_len + 1));
			if (arr[i] == NULL)
			{
				for (k = 0; k < i; k++)
				{
					free(arr[k]);
				}
				free(arr);
				return (NULL);
			}
			for (j = 0; j < word_len; j++)
			{
				arr[i][j] = *ptr;
				ptr++;
			}
			arr[i][j] = '\0';
		}
		arr[i] = NULL;
	}
	return (arr);
}

/**
 * print_array - Prints the generated string array
 * @arr: The array
 *
 * Return: void
 */
void print_array(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}

/**
 * free_mem - Frees the memory allocated by malloc
 * @arr: The array whose memory will be freed
 *
 * Return: void
 */
void free_mem(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr[i]);
	free(arr);
}
