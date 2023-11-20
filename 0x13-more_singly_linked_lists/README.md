<h1>More Singly Linked Lists</h1>
This directory was created on Nov 20, 2023 to hold my answers/submissions for
the project '0x13. C - More singly linked lists' of ALX SE Foundations.

Singly Linked List: is a data structure that is linear (data items organized
linearly / sequentially), and dynamic (size can be altered at runtime).
Linked lists operate on the idea of nodes which are elements of the list
containing value, and pointer/s to adjacent nodes. In the case of singly
linked lists, each node contains value and a pointer to the next node in
the list.

<h3>Tasks</h3>
0-print_listint.c: The function receives a pointer to a singly linked list,
and prints the value (integer) stored in each node of the list. It returns
the number of (non NULL) nodes in the list.

1-listint_len.c: Given a head of a singly linked list, the function returns
the number of nodes/elements in the linked list using the fact that the last
node has its next pointer pointing to NULL.

2-add_nodeint.c: The function accepts a pointer to the head of a linked list,
and an integer value, and it creates and adds a new node to the beginning of
the linked list, initializing its n with the given integer value.

3-add_nodeint_end.c: Similar to the previous one, this functino receives a
pointer to a head of a linked list, and an integer value. It creates the node
and inits its n value with the given argument, it then adds the node to the
end of the list.

4-free_listint.c: The function receives the head of a singly linked list and
frees all the memory allocated for the nodes of the linked list.

5-free_listint2.c: The function does the same as above but also sets the head
of the linked list (the head whose address is passed to the function) to NULL.
