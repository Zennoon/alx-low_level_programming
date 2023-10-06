#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function first initializes the character variable to 'a'.
 * Then, since chars are actually just integers under the hood, we use
 * a while loop to print the character, and then increment it to the next
 * character until 'z' is reached
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
