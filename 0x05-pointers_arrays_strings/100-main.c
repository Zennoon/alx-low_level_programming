#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 *
 * Description: Uses _atoi function to extract an integer within a string
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str[] = {"98",
		       "-402",
		       "abcd98",
		       "ef402gh",
		       "+-+-+-23a",
		       "   -   +   - ++ - -98",
		       "-2147483648"
	};
	int i = 0;

	while (i < 7)
	{
		printf("%s: %d\n", str[i], _atoi(str[i]));
		i++;
	}
	return (0);
}
