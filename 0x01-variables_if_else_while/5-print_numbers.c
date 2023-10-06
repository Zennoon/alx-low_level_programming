#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function initializes an unsigned short (saving memory) at 0
 * and then uses a while loop to print the number and increment it
 * until it reaches 10, in which case it exits the loop and prints a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short i;

	i = 0;
	while (i < 10)
	{
		printf("%u", i);
		i++;
	}
	printf("\n");
	return (0);
}
