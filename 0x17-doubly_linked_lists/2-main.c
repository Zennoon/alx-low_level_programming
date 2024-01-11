#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Adds new nodes to the beginning of a doubly linked list and
 * prints it
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	printf("-> %lu elements\n", print_dlistint(head));
	return (EXIT_SUCCESS);
}
