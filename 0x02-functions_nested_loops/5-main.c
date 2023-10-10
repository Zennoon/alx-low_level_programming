#include "main.h"
#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function uses print_sign function to print the sign
 * of a given number, and return its signum value
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = print_sign(24);
	int b = print_sign(-15);
	int c = print_sign(0);
	printf("%d%d%d", a, b, c);
}
