#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/** Structs **/
/**
 * struct dlistint_s - Doubly linked list
 * @n: An integer (the value held by the node)
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/** Function prototypes **/
size_t print_dlistint(const dlistint_t *);
size_t dlistint_len(const dlistint_t *);
dlistint_t *add_dnodeint(dlistint_t **, const int);
dlistint_t *add_dnodeint_end(dlistint_t **, const int);
void free_dlistint(dlistint_t *);
dlistint_t *get_dnodeint_at_index(dlistint_t *, unsigned int);
int sum_dlistint(dlistint_t *);
dlistint_t *insert_dnodeint_at_index(dlistint_t **, unsigned int, int);
int delete_dnodeint_at_index(dlistint_t **, unsigned int);
#endif
