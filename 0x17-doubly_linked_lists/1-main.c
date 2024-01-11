#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates and prints the elements of a doubly linked list
 * Return: Always 0 (Success)
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "ERROR: CAN'T MALLOC\n");
		return (EXIT_FAILURE);
	}
	new->n = 9;
	new->prev = NULL;
	new->next = head;
	head->prev = new;
	head = new;
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
