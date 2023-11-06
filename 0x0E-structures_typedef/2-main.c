#include <stdio.h>
#include "dog.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the print_dog function to print the elements/fields
 * of a dog struct instance
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Julien";
	print_dog(&my_dog);
	return (0);
}
