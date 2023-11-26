#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int endi = get_endianness();

	printf("%d\n", endi);
	return (0);
}
