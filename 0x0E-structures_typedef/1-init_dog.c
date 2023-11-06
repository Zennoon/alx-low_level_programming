#include "dog.h"

/**
 * init_dog - Initializes a dog structure instance with the given input
 * @dogp: A pointer to the dog struct instance
 * @name: The name to be given to the instance
 * @age: The age to be given to the dog instance
 * @owner: The owner to be given to the dog instance
 *
 * Description: Given a pointer to a dog struct instance, it initializes the
 * name, age and owner fields with the given arguments
 * Return: void
 */
void init_dog(struct dog *dogp, char *name, float age, char *owner)
{
	dogp->name = name;
	dogp->age = age;
	dogp->owner = owner;
}
