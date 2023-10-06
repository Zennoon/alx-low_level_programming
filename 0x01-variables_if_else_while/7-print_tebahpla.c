#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function utilizes the while loop with the character
 * variable initialized at 'z', and this time printing the character,
 * and decrementing it until it prints 'a'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
