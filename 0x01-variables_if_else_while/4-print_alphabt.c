#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function uses a while loop to print the alphabet, as
 * before. This time, it uses an if statement inside the loop to check
 * if the current character is not an 'e' or a 'q', and to print only if
 * it is neither.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
