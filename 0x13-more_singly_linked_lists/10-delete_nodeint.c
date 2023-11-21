#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index of a given llist
 * @head: A pointer to the head of the singly linked list
 * @index: The index of the node to delete
 *
 * Return: 1 if the deletion is successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int success = -1;
	listint_t *tmp;

	if (*head != NULL)
	{
		if (index == 0)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			success = 1;
		}
		else
		{
			unsigned int i = 0;
			listint_t *tmp2 = *head;

			while (i != index - 1)
			{
				tmp2 = tmp2->next;
				i++;
				if (tmp2->next == NULL)
				{
					return (success);
				}
			}
			if (tmp2->next != NULL)
			{
				tmp = (tmp2->next)->next;
				free(tmp2->next);
				tmp2->next = tmp;
				success = 1;
			}
		}
	}
	return (success);
}
