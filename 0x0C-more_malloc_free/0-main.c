#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Allocates a given amount of memory using malloc. If malloc fails
 * exits with a status of 98
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c;
	int *i;
	float *f;

	c = malloc(sizeof(char) * 1024);
	printf("c = %p\n", (void *) c);
	i = malloc(sizeof(int) * 402);
	printf("i = %p\n", (void *) i);
	f = malloc(sizeof(float) * INT_MAX);
	printf("f = %p\n", (void *) f);
	free(c);
	free(i);
	free(f);
	return (0);
}
