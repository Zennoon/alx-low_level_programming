#ifndef DOG_H
#define DOG_H

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
void print_dog(struct dog *);

/**
 * typedef dog_t - A typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
