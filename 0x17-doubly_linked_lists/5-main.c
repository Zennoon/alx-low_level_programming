#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates a doubly linked list and retrieves the node at n index
 * and prints the value it holds
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head, *node;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 5);
	printf("n = %d\n", node->n);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
