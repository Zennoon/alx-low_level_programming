#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Displays the sum of two numbers using the add function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = add(90, 8);
	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
	return (0);
}
