#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: The function uses the _isalpha function to check whether
 * a given character is an alphabet letter or not
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r = _isalpha('w');
	int s = _isalpha('4');
	int t = _isalpha('-');
	_putchar(r + '0');
	_putchar(s + '0');
	_putchar(t + '0');
	return (0);
}
