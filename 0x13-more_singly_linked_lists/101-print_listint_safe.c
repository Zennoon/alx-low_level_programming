#include <stdio.h>
#include "lists.h"

/**
 * is_in_arr - Checks if a given value is an element of an array
 * @arr: The array of pointers
 * @n: The number of elements of the array
 * @add: The address to check for existence in the array
 *
 * Return: 1 if the address exists in the pointer/address array, 0 otherwise
 */
int is_in_arr(const listint_t **arr, size_t n, const listint_t *add)
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
 * print_listint_safe - Prints the content of nodes in a given llist only once
 * @head: Head of the singly linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_cnt = 0;
	const listint_t **address_arr = malloc(0);

	while (head != NULL && !is_in_arr(address_arr, node_cnt, head))
	{
		printf("[%p] %d\n", (void *) head, head->n);
		address_arr = realloc(address_arr, (node_cnt + 1)
				      * sizeof(listint_t *));
		if (address_arr == NULL)
		{
			exit(98);
		}
		address_arr[node_cnt] = head;
		head = head->next;
		node_cnt++;
	}
	if (head != NULL)
	{
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	free(address_arr);
	return (node_cnt);
}
