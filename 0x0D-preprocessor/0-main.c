#include <stdio.h>
#include "0-object_like_macro.h"

/**
 * main - The entry point of the program
 *
 * Description: Makes use of the SIZE macro defined in the 0-object_like_macro
 * header file
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 98 + SIZE;
	printf("%d\n", n);
	return (0);
}
