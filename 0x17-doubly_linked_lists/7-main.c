#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates and inserts nodes into a doubly linked list using
 * indices
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	print_dlistint(head);
	printf("--------------------------\n");
	if (insert_dnodeint_at_index(&head, 1, 4096) == NULL)
		printf("nil\n");
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
