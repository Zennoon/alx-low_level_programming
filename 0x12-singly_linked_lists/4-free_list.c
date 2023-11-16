#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees all the memory allocated for a given singly l-list
 * @head: A pointer to the first node of the list (simply the head of the list)
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
