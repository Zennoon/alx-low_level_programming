#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the print_array function to print some number of elements
 * of an array
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums[10] = {0, 101, 23, 3, 45, 54, 62, 701, 889, 963};

	print_array(nums, 3);
	print_array(nums, 7);
	return (0);
}
