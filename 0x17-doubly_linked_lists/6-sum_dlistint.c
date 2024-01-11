#include "lists.h"

/**
 * sum_dlistint - Returns the sum of the values held by nodes of a doubly
 * linked list
 * @head: Pointer to the head/first node of the list
 *
 * Return: The sum of the ints held by the nodes of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
