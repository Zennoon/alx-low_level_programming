#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses print_triangle function to print a triangle of a given
 * size, made up of '#'s
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_triangle(10);
	print_triangle(0);
	print_triangle(-5);
	print_triangle(6);
	return (0);
}
