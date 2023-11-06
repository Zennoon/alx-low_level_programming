#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a given string
 * @s: The string whose length is checked
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len))
	{
		len++;
	}
	return (len);
}

/**
 * _memcpy - Copies the content of one memory area to another
 * @src: The source from which we are copying
 * @dest: The destination area to which we are copying
 *
 * Return: void
 */
void _memcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

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
		new_d->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		_memcpy(name, new_d->name);
		new_d->age = age;
		new_d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		_memcpy(owner, new_d->owner);
	}
	return (new_d);
}
