#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Checks whether a character is uppercase or not
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = _isupper('a');
	int A = _isupper('A');
	int d = _isupper('d');
	int D = _isupper('D');
	_putchar(a + '0');
	_putchar(A + '0');
	_putchar(d + '0');
	_putchar(D + '0');
	return (0);
}
