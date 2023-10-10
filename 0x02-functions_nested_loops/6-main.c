#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: The function uses the _abs function to compute the absolute
 * value of an integer
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar(_abs(3) + '0');
	_putchar(_abs(0) + '0');
	_putchar(_abs(-3) + '0');
	return (0);
}
