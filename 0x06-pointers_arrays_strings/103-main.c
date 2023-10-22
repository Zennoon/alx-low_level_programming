#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Sums two positive integers inside strings using infinite_sum
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s1[] = "8349291";
	char s2[] = "1929438";
	char s3[20];

	printf("sum = %s\n", infinite_sum(s1, s2, s3, 20));
	return (0);
}
