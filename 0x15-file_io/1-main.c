#include "main.h"

/**
 * main - The entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int success;

	success = create_file("success.c", "It was successful");
	printf("%d\n", success);
	return (0);
}
