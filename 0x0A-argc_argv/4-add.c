#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Converts a string to a number
 * @s: The string to be converted
 *
 * Return: The number inside s if s doesn't contain any non-digit characters, 0
 * otherwise
 */
int _atoi(char *s)
{
	int num, sign;
	char *ptr;

	num = 0;
	sign = 1;
	ptr = s;
	if (*ptr == '-')
	{
		sign *= -1;
		ptr++;
	}
	while (*ptr)
	{
		if (*ptr < 48 || *ptr > 57)
		{
			return (0);
		}
		num = (num * 10) + (*ptr - 48);
		ptr++;
	}
	return (num * sign);
}

/**
 * main - The entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (1D array of the command line arguments passed)
 *
 * Description: Sums the command line arguments (if they are numbers) after
 * turning them into a number using atoi function, or returns 1 if one of the
 * arguments is not a number in string format
 * Return: 0 if all the arguments (besides first one) are digits, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '0' && !_atoi(argv[i])) /* Not a digit */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
