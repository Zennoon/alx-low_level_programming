#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Initializes a singly linked list and uses print_list to print
 * its contents
 * Return: Always 0 (Success)
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {98, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error!\n");
		return (1);
	}
	new->n = 1024;
	new->next = head;
	head = new;
	print_listint(head);
	n = listint_len(head);
	printf("%lu elements\n", n);
	free(new);
	return (0);
}
