#include <stdio.h>
#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the insert_nodeint_at_index function to insert a node to
 * a singly linked list at a desired index
 * Return: Always 0 (Success)
 */
int main(void)
{
	listint_t *head;

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
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 5);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	return (0);
}
