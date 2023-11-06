#include <stdio.h>
#include "dog.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the dog_t type which is an alias for struct dog created
 * using typdef
 * Return: Always 0 (Success)
 */
int main(void)
{
	dog_t my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.6;
	my_dog.owner = "Julien";
	print_dog(&my_dog);
	return (0);
}
