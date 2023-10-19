#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 0;
	int n2 = -1;
	int n3 = 1;
	int n4 = -204;
	int n5 = 9205;
	printf("%d, %d, %d, %d, %d\n", get_digits(n1), get_digits(n2), get_digits(n3), get_digits(n4), get_digits(n5));
	print_number(n1);
	printf("\n");
	print_number(n2);
	printf("\n");
	print_number(n3);
	printf("\n");
	print_number(n4);
	printf("\n");
	print_number(n5);
	printf("\n");
	return (0);
}
