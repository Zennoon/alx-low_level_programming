#include "lists.h"

/**
 * pop_listint - Pops the head of the given singly llist and returns its value
 * @head: A pointer to the head of the singly linked list
 *
 * Return: The value stored in the popped node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (head != NULL && *head != NULL)
	{
		n = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (n);
}
