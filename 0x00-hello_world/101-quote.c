#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function uses perror (which in inside the stdio library
 * to print the message to the standard error)
 * Return: Always 1 (Failure)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	       1, 60, stderr);
	return (1);
}
