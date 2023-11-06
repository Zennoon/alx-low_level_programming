#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog struct that has been dynamically allocated
 * @dogp: A pointer to the dog struct to be freed
 *
 * Return: void
 */
void free_dog(dog_t *dogp)
{
	if (dogp != NULL)
	{
		if (dogp->name != NULL)
		{
			free(dogp->name);
		}
		if (dogp->owner != NULL)
		{
			free(dogp->owner);
		}
		free(dogp);
	}
}
