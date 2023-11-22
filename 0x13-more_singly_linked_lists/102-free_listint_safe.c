#include <stdio.h>
#include "lists.h"

/**
 * is_in_arr2 - Checks if a given value is an element of an array
 * @arr: The array of pointers
 * @n: The number of elements of the array
 * @add: The address to check for existence in the array
 *
 * Return: 1 if the address exists in the pointer/address array, 0 otherwise
 */
int is_in_arr2(listint_t **arr, size_t n, listint_t *add)
{
	size_t i = 0;

	while (i < n)
	{
		if (arr[i] == add)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * free_listint_safe - Frees memory allocated for a list and handles loops
 * @head: Head of the singly linked list
 *
 * Return: Size of memory freed
 */
size_t free_listint_safe(listint_t **head)
{
	size_t node_cnt = 0;
	listint_t **address_arr = malloc(0);
	listint_t *tmp;

	while (*head != NULL && !is_in_arr2(address_arr, node_cnt, *head))
	{
		address_arr = realloc(address_arr, (node_cnt + 1)
				      * sizeof(listint_t *));
		if (address_arr == NULL)
		{
			exit(98);
		}
		address_arr[node_cnt] = *head;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		node_cnt++;
	}
	*head = NULL;
	free(address_arr);
	return (node_cnt);
}
