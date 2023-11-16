#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Returns the length of a given string
 * @str: The string whose length is returned
 *
 * Return: The length of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str != NULL && *str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * add_node - Adds a new node to the beginning of a singly linked list
 * @head: A pointer to the head of the singly llist
 * @str: The string to be duplicated to be the str of the node
 *
 * Description: Given a pointer to the head (which is a pointer to the first
 * node), it creates a new node, inits its content, and adds it to the front
 * Return: The address of new node if successful, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = NULL;
		if (str != NULL)
		{
			new_node->str = strdup(str);
		}
		new_node->len = _strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
