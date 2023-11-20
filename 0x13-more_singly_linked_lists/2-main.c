#include "lists.h"

/**
 * main - The entry point of the function
 *
 * Description: Uses the add_nodeint function to add nodes to the beginning
 * of a singly linked list
 * Return: Always 0 (Success)
 */
int main(void)
{
	listint_t *head = NULL;

	add_nodeint(&head, 5);
	add_nodeint(&head, 98);
	print_listint(head);
	return (0);
}
