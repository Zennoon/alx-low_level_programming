#include "main.h"

/**
 * jack_bauer - Prints each minute of the day of Jack Bauer
 *
 * Description: The function uses nested while loops
 * Return: void
 */
void jack_bauer(void)
{
	short num1;

	num1 = 0;
	while (num1 < 24)
	{
		short num2;

		num2 = 0;
		while (num2 < 60)
		{
			_putchar((num1 / 10) + '0');/* The first digit of num1*/
			_putchar((num1 % 10) + '0');/* The last digit of num1*/
			_putchar(':');
			_putchar((num2 / 10) + '0');/* The first digit of num2*/
			_putchar((num2 % 10) + '0');/* The last digit of num2*/
			_putchar('\n');
			num2++;
		}
		num1++;
	}
}
