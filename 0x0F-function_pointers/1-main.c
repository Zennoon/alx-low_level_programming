#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Prints an element of an array
 * @elem: The element to print
 *
 * Return: void
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hexa - Prints an array element in hexadecimal
 * @elem: The element to print
 *
 * Return: void
 */
void print_elem_hexa(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - The entry point of the program
 *
 * Description: Uses array_iterator which calls a given function on every elem
 * in an array using function pointers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[6] = {0, 98, 402, 1024, 4096, 16396};

	array_iterator(arr, 6, &print_elem);
	array_iterator(arr, 6, print_elem_hexa);
	return (0);
}
