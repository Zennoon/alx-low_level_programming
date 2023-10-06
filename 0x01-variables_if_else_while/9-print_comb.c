#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function initializes an int variable at 48 (ASCII for '0'),
 * and until it reaches '9', it prints it along with a ',' and a ' '. When it
 * '9', it only prints '9' (using an if statement).
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar(10);
	return (0);
}
