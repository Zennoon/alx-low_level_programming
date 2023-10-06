#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: This function just adds another layer to the previous task
 * refer to 100-print_comb3.c for further description
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short num1;

	num1 = 48; /* ASCII code of '0' */;
	while (num1 <= 55)
	{
		unsigned short num2;

		num2 = num1 + 1;
		while (num2 <= 56)
		{
			unsigned short num3;

			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (!(num1 == 55 && num2 == 56 && num3 == 57))
				{
					/* If the combination is not '789' */
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar(10);
	return (0);
}
