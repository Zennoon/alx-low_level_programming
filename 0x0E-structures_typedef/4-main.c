#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - The entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.6, "Julien");
	print_dog(my_dog);
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return (0);
}
