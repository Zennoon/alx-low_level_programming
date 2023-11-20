#ifndef LISTS_H
#define LISTS_H

/** Structures and typedefs **/
/**
 * struct listint_s - Node of a singly linked list
 * @n: An integer (The value held in the list)
 * @next: Pointer to the next node
 *
 * Description: Structure of a singly linked list node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/** function prototypes **/
int print_listint(const listint_t *);
#endif
