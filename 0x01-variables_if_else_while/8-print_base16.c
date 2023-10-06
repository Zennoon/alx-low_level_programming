#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function first prints characters '0' to '9' (ASCII
 * not ints) using a loop, then it reassigns the variable to 'a', and
 * uses another loop to print from 'a' to 'f'. Finally, it prints a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
