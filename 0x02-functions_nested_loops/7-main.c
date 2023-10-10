#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: The function uses print_last_digit() to do as the name suggests
 * and also return the last digit of a given number
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_last_digit(1025);
	print_last_digit(-1025);
	print_last_digit(102);
	print_last_digit(5);
	return (0);
}
