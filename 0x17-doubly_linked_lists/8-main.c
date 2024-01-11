#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates a doubly linked list and deletes nodes at certain
 * indices and prints the resulting list
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
	printf("-------------------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-------------------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-------------------------\n");
	delete_dnodeint_at_index(&head, 4);
	print_dlistint(head);
	printf("-------------------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-------------------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	free_dlistint(head);
	return (EXIT_SUCCESS);
}
