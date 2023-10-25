#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the is_palindrome function which in turn uses the
 * recursively defined check_palindrome function to check if a given string
 * is palindrome or not
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}
