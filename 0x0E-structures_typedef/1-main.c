#include <stdio.h>
#include "dog.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the init_dog function to initializea given dog struct
 * with given field values
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("%s\n%f\n%s\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
