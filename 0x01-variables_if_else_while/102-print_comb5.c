#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: This function makes use of a pattern I noticed in the
 * given example. In each combination, the first number (set of numbers) is
 * less than the second set. So using while loops, the code prints each
 * combination, starting from first number 00 (second number has to be greater
 * so it starts at 01) to first number 98 (second number is 99). The first
 * number can't be 99 because the second number won't have any options, so
 * it stops at '98 99'
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short num1 = 48;

	while (num1 <= 57)
	{
		unsigned short num2 = 48;

		while (num2 <= 57)
		{
			unsigned short num3 = num1;
			unsigned short num4 = num2 + 1;

			while (num3 <= 57)
			{
				while (num4 <= 57)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (!(num1 == 57
						     && num2 == 56
						     && num3 == 57
						     && num4 == 57))
					{
						putchar(',');
						putchar(' ');
					}
					num4++;
				}
				num4 = 48;
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
