#include <stdio.h>
#include "dog.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses new_dog to create a new dog struct, uses print_dog to print
 * the elements of the field, and then uses free_dog to free the allocated mem
 * Return: Always 0 (Success)
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.7, "Julien");
	print_dog(my_dog);
	free_dog(my_dog);
	return (0);
}
