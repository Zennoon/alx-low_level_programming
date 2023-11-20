#include <stdio.h>
#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the add_nodeint_end function to add a node to the end of
 * a singly linked list
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	listint_t *head = NULL;

	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	n = pop_listint(&head);
	printf("n = %d\n", n);
	print_listint(head);
	n = pop_listint(&head);
	printf("n = %d\n", n);
	print_listint(head);
	n = pop_listint(&head);
	printf("n = %d\n", n);
	print_listint(head);
	n = pop_listint(&head);
	printf("n = %d\n", n);
	print_listint(head);
	n = pop_listint(&head);
	printf("n = %d\n", n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
