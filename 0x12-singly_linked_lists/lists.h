#ifndef LISTS_H
#define LISTS_H

/** Prototypes **/
int _putchar(char);

/** Structures **/
/**
 * struct list_s - A singly linked list
 * @str: A malloced string
 * @len: Length of the string
 * @next: A pointer to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_n *next;
} list_t;
#endif
