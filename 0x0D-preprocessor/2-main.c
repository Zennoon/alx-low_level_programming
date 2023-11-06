#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: Uses the standard pre-defined macro __FILE__ to print out the
 * name of the file
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
