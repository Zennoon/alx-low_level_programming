#include "main.h"

/**
 * puts2 - Prints every other character of a given string
 * @str: The string to be (partially) printed
 *
 * Description: Since we will be using a loop, we can use the parity (even/odd)
 * of the loop counter to decide to print the character of the string or not
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (!(i % 2))
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
