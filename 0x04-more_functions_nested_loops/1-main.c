#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Checks whether a character is a digit (0-9) or not
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = _isdigit('0');
	int z = _isdigit('9');
	int n = _isdigit('n');
	int e = _isdigit('4');
	_putchar(a + '0');
	_putchar(z + '0');
	_putchar(n + '0');
	_putchar(e + '0');
	return (0);
}
