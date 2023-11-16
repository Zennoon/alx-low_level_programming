#include <stdlib.h>
#include "lists.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses add_node to add nodes to the front of a singly llist
 * Return: Always 0 (Success)
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Yunus");
	add_node_end(&head, NULL);
	print_list(head);
	return (0);
}
