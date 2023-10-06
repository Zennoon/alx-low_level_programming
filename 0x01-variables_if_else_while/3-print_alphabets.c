#include <stdio.h>

/**
 * main - The entry point of the function
 *
 * Description: The function first initializes the char variable to 'a'
 * Then it uses a while loop to print the entire lowercase alphabet.
 * After, it assigns the variable to 'A', and uses another while loop
 * to print the uppercase alphabet. Last, an additional putchar is used
 * to print a new line
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
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
