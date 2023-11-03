#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Returns the length of a given string (excluding '\0')
 * @s: The string whose length is computed
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int len;
	char *ptr;

	len = 0;
	ptr = s;
	if (ptr != NULL)
	{
		while (*ptr)
		{
			len++;
			ptr++;
		}
	}
	return (len);
}

/**
 * fill_leading_0s - Fills a given number string with initial 0s
 * @n: The number string to be filled
 * @zeros: The number of zeros to fill n with
 *
 * Return: A pointer to the filled string
 */
char *fill_leading_0s(char *n, int zeros)
{
	int len, i, j;
	char *new_n;

	len = _strlen(n);
	new_n = malloc(sizeof(char) * (len + zeros + 1));
	if (new_n != NULL)
	{
		i = 0;
		for (i = 0; i < zeros; i++)
		{
			new_n[i] = '0';
		}
		for (j = 0; j < len; j++)
		{
			new_n[i] = n[j];
			i++;
		}
		new_n[i] = '\0';
	}
	return (new_n);
}

/**
 * reverse_string - Reverses a string stored in allocated memory
 * @str: The string to be reversed
 *
 * Return: A pointer to allocated memory storing str reversed
 */
char *reverse_string(char *str)
{
	int i = 0;
	int len;
	char *rev;
	char *ptr;

	len = _strlen(str);
	rev = malloc(len + 1);
	if (rev != NULL)
	{
		ptr = (str + len - 1);
		i = 0;
		while (i < len)
		{
			rev[i] = *ptr;
			ptr--;
			i++;
		}
		rev[i] = '\0';
		free(str);
	}
	return (rev);
}

/**
 * string_n_add - Adds two numbers stored as strings
 * @n1: First operand
 * @n2: Second operand
 *
 * Return: A pointer to an allocated memory holding n1 + n2
 */
char *string_n_add(char *n1, char *n2)
{
	int len1, len2, carry, i, j, curr_sum;
	char *new_n2;
	char *rev_sum;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	rev_sum = malloc(sizeof(char) * (len1 + 1));
	if (rev_sum != NULL)
	{
		new_n2 = fill_leading_0s(n2, (len1 - len2));
		j = 0;
		carry = 0;
		for (i = len1 - 1; i >= 0; i--)
		{
			curr_sum = n1[i] + new_n2[i] - 96 + carry;
			carry = curr_sum / 10;
			curr_sum %= 10;
			rev_sum[j] = curr_sum + 48;
			j++;
		}
		free(new_n2);
		if (carry > 0)
		{
			rev_sum = realloc(rev_sum, sizeof(rev_sum) + 1);
			rev_sum[j] = carry + 48;
			j++;
		}
		rev_sum[j] = '\0';
	}
	free(n1);
	return (reverse_string(rev_sum));
}

/**
 * _strcpy - Copies a given string in a dynamically allocated memory area
 * @s: The string to be copied
 *
 * Return: A pointer to the allocated memory area holding a copy of s
 */
char *_strcpy(char *s)
{
	int len, i;
	char *cpy;
	char *ptr;

	len = _strlen(s);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy != NULL)
	{
		i = 0;
		ptr = s;
		while (*ptr)
		{
			cpy[i] = *ptr;
			ptr++;
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}

/**
 * mul - Multiplies two numbers stored as strings
 * @n1: First operand
 * @n2: Second operand
 *
 * Return: A pointer to an allocated memory area holding n1 * n2
 */
char *mul(char *n1, char *n2)
{
	char *product;
	char *i;

	product = _strcpy(n1);
	i = malloc(sizeof(char) * 2);
	i[0] = '1';
	i[1] = '\0';
	while ((strcmp(i, n2)))
	{
		product = string_n_add(product, n1);
		i = string_n_add(i, "1");
	}
	free(i);
	return (product);
}

/**
 * is_num_string - Checks if a given string contains only digits
 * @s: The string to be checked
 *
 * Return: 1 if s is a valid num string (all digits), 0 otherwise
 */
int is_num_string(char *s)
{
	int is_num;
	char *ptr;

	is_num = 1;
	ptr = s;

	while (*ptr)
	{
		if (*ptr < 48 || *ptr > 57)
		{
			is_num = 0;
		}
		ptr++;
	}
	return (is_num);
}

/**
 * main - The entry point of the program
 * @ac: Argument Count
 * @av: Argument Vector (a 1D array of the command line arguments as strings)
 *
 * Return: 0 if successful, 98 if not
 */
int main(int ac, char **av)
{
	char *err = "Error";
	char *product;
	char *ptr;

	if (ac != 3 || (!is_num_string(av[1]) || (!is_num_string(av[2]))))
	{
		while (*err)
		{
			_putchar(*err);
			err++;
		}
		_putchar('\n');
		exit(98);
	}
	product = mul(av[1], av[2]);
	ptr = product;
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
	free(product);
	return (0);
}
