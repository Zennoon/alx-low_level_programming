#include <stdio.h>

/**
 * main - The entry point of the function
 *
 * Description: The function first initializes a variable to the ASCII code of
 * '0', then until it reaches the ASCII code for '9', it sets another variable
 * to the next character (num1 + 1), and until this variable reaches '9'
 * (inclusive), it prints   the combination of the two characters, along with
 * ',' and ' '. The exception is the last combination '89', in which case, only
 * the combination is printed.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short num1;

	num1 = 48;
	while (num1 < 57)
	{
		unsigned short num2;

		num2 = num1 + 1;
		while (num2 <= 57)
		{
			putchar(num1);
			putchar(num2);
			if (!(num1 == 56 && num2 == 57))
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
