#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates and inserts node at the end of  a doubly linked list
 * then prints it
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
	free_dlistint(head);
	return (EXIT_SUCCESS);
}
