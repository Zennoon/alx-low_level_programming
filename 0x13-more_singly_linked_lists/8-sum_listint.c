#include "lists.h"

/**
 * sum_listint - Returns the sum of the values stored in nodes of given llist
 * @head: The head of the singly linked list
 *
 * Return: Sum of the n values in the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
