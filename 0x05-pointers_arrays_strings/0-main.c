#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the function reset_to_98 to change the value held by a
 * variable to 98 using a pointer to that variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 402;
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
