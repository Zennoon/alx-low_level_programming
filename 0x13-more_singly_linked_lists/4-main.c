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
	listint_t *head = NULL;

	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	free_listint(head);
	return (0);
}
