#include "main.h"

int get_length(char *);

/**
 * puts_half - Prints the later half of a given string
 * @str: The string, half of which will be printed
 *
 * Description: Uses get_length to get the string's length, and then prints
 * starting from (length - (length / 2))th character
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	char *ptr;

	len = get_length(str);
	ptr = &str[len - len / 2];
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}


/**
 * get_length - Returns the length of a given null terminated string
 * @s: The string the length of which is computed
 *
 * Return: The length of s
 */
int get_length(char *s)
{
	short len;
	short i;

	len = 0;
	i = 0;
	while (*(s + i))
	{
		len++;
		i++;
	}
	return (len);
}
