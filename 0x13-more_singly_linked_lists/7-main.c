#include <stdio.h>
#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the get_nodeint_at_index function to retrieve a node
 * at a specific index (offset from the head)
 * Return: Always 0 (Success)
 */
int main(void)
{
	listint_t *head;
	listint_t *node;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	node = get_nodeint_at_index(head, 10);
	printf("node->n = %d\n", node->n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
