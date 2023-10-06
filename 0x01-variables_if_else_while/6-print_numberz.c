#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The task requirements dictate, that I couldn't use chars,
 * or printf. So, this code uses the putchar function which, if passed an
 * integer, will translate that integer to its ASCII character. The ASCII
 * decimal code for 0 is 48, and that of 9 is 57. So, each number in that range
 * is passed to the loop to translate it to numbers 0 to 9.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
