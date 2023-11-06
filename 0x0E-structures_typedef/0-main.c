#include <stdio.h>
#include "dog.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates an instance of the dog struct defined inside dog.h
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Julien";
	printf("%s\n%f\n%s\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
