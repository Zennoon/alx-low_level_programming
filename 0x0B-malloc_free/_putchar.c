#include <unistd.h>

/**
 * _putchar - Prints a given character to stdout
 * @c: The character to be printed
 *
 * Return: 1 if successful, 0 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
