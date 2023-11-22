#include "lists.h"

/**
 * find_listint_loop - Finds the beginning of a loop inside a list if it exists
 * @head: The head of the linked list
 *
 * Return: Address of the node where the loop begins, or NULL if there no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		if (tmp == head)
		{
			break;
		}
		head->next = head;
		head = tmp;
	}
	return (head);
}
