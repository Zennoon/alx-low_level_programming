#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Given a pointer to a dog struct instance, prints the elements
 * @dogp: A pointer to the dog struct instance whose elements are to be printed
 *
 * Return: void
 */
void print_dog(struct dog *dogp)
{
	if (dogp != NULL)
	{
		printf("Name: %s\n", dogp->name != NULL ? dogp->name : "(nil)");
		printf("Age: ");
		&dogp->age != NULL ? printf("%f\n", dogp->age) :
			printf("(nil)");
		printf("Owner: %s\n", dogp->owner != NULL ?
		       dogp->owner : "(nil)");
	}
}
