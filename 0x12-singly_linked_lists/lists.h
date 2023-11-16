#ifndef LISTS_H
#define LISTS_H

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
	struct list_s *next;
} list_t;

/** Prototypes **/
int _putchar(char);
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);
#endif
