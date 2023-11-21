#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list
 * @head: A pointer to the head of the list
 *
 * Return: The head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp2;

	while (head != NULL && *head != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = tmp2;
	}
	*head = tmp;
	return (*head);
}
