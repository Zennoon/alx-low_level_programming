#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

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
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pop_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);
int sum_listint(listint_t *);
listint_t *insert_nodeint_at_index(listint_t **, unsigned int, int);
int delete_nodeint_at_index(listint_t **, unsigned int);
listint_t *reverse_listint(listint_t **);
size_t print_listint_safe(const listint_t *);
size_t free_listint_safe(listint_t **);
listint_t *find_listint_loop(listint_t *head);
#endif
