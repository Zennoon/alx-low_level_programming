#include <stdio.h>
#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses reverse_listint function to reverse a singly linked list
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
	add_nodeint_end(&head, 5);
	add_nodeint_end(&head, 6);
	print_listint(head);
	reverse_listint(&head);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
