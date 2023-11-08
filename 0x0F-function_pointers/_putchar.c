#include <unistd.h>

/**
 * _putchar - Prints a single character to stdout
 * @c: The character to be printed
 *
 * Return: Number of bytes printed (1 if successful, 0 otherwise)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
