#include "lists.h"

/**
 * free_listint2 - Frees heap memory space allocated for a given singly llist
 * @head: Pointer to the head of a singly linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
}
