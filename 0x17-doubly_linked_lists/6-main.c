#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Creates a doubly linked list and prints the sum of values held
 * by the nodes
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, -98);
	add_dnodeint_end(&head, 402);
	print_dlistint(head);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
