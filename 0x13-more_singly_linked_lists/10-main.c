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
	int ret;
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 2);
	print_listint(head);
	ret = delete_nodeint_at_index(&head, 0);
	printf("ret = %d\n", ret);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
