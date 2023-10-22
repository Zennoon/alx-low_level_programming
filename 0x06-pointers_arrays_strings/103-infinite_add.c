#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_length - Counts and returns the length of a given string
 * @s: The string whose length is counted
 *
 * Return: The length of s
 */
int get_length(char *s)
{
	char *ptr;
	int len;

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
 * fill_lead_0s - Copies a integer string filling missing bytes with 0
 * @s: The string to be copied
 * @len: The length of s
 * @n: The length of the resulting string (len + the number of leading zeros)
 *
 * Return: The new string
 */
char *fill_lead_0s(char *s, char *cpy, int len, int n)
{
	int i, zeros, j;

	zeros = n - len;
	for (i = 0; i < zeros; i++)
	{
		cpy[i] = '0';
	}
	for (j = 0; j < len; j++)
	{
		cpy[i] = s[j];
		i++;
	}
       	return (cpy);
}

/**
 * infinite_sum - Computes and returns the sum of two integers inside strings
 * @n1: First operand to be added
 * @n2: Second operand
 * @r: The buffer where the sum will be stored
 * @size_r: The size of r
 *
 * Return: r if size_r >= size of the sum, 0 otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, i, num_count , is_number, j;
	char num1[100], num2[100], sum[101];

	len1 = get_length(n1);
	len2 = get_length(n2);
	fill_lead_0s(n1, num1, len1, 100);
	fill_lead_0s(n2, num2, len2, 100);
	carry = 0;
	for (i = 99; i >= 0; i--)
	{
		int curr_sum = num1[i] - 48 + num2[i] - 48 + carry;
		carry = curr_sum / 10;
		curr_sum = curr_sum % 10;
		sum[i] = curr_sum + 48;
	}
	sum[100] = '\0';
	num_count = 0;
	is_number = 0;
	for (i = 0; i < 100; i++)
	{
		if (sum[i] != '0')
		{
			is_number = 1;
		}
		if (is_number)
		{
			num_count++;
		}
	}
	num_count = num_count == 0 ? 1 : num_count;
	if (size_r < num_count + 1)
	{
		return NULL;
	}
	else
	{
		j = 0;
		for (i = 100 - num_count; i < 100; i++)
		{
			r[j] = sum[i];
			j++;
		}
		r[j] = '\0';
	}
	return (r);
}
