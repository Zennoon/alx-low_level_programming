#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog struct instance using given values
 * @name: The name to give the new dog struct
 * @age: The age to give the new dog struct
 * @owner: The owner to give the new dog struct
 *
 * Return: A pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_d = malloc(sizeof(dog_t));
	if (new_d != NULL)
	{
		new_d->name = strdup(name);
		new_d->age = age;
		new_d->owner = strdup(owner);
	}
	return (new_d);
}
