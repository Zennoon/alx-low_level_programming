#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Dscription: Calculates the length of a string using the recursive function
 * _strlen_recursion and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}
