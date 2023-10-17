#include "main.h"

/**
 * _atoi - Searches for and returns an integer within a string
 * @s: The string which is searched
 *
 * Description: searches the string as an array of characters for numbers,
 * and special signs, and returns the first integer number found
 * Return: 0 if no integer is found, otherwise, it returns the found integer
 */
int _atoi(char *s)
{
	unsigned int num;
	int i;
	int sign;
	int number_found;

	num = 0;
	sign = 1;
	number_found = 0; /* Represents a boolean value (initially false) */
	i = 0;
	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + (s[i] % 48);
			number_found = 1; /* Number has been found */
		}
		else if (!(s[i] >= 48 && s[i] <= 57) && number_found)
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
