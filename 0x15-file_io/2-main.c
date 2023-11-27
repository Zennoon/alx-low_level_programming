#include "main.h"

/**
 * main - The entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int success;

	success = append_text_to_file("hello.c", "Hello, world!");
	printf("%d\n", success);
	return (0);
}
