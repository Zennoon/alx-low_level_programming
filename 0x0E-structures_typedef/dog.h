#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)
/**
 * struct dog - A structure for dogs
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
#endif
