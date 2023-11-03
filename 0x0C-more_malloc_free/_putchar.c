#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a given character to stdout
 * @c: The character to print
 *
 * Return: 1 if successful, 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
