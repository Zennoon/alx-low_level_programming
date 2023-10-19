#include "main.h"

/**
 * _strcmp - Compares two strings and returns an integer accordingly
 * @s1: String-1 of the comparison
 * @s2: String-2 of the comparison
 *
 * Return: 1 if s1 > s2, -1 if s1 < s2 and 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int sum1;
	int sum2;
	char *ptr1;
	char *ptr2;

	sum1 = 0;
	sum2 = 0;
	ptr1 = s1;
	ptr2 = s2;
	while (*ptr1 && *ptr2)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
	}
	if (*ptr1)
	{
		sum1 += *ptr1;
	}
	else if (*ptr2)
	{
		sum2 += *ptr2;
	}
	return (sum1 - sum2);
}
