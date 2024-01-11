<h2>Doubly Linked Lists</h2>
<br/>
This directory was created on January 11, 2024 to hold my answers/submissions
for the ALX SE Foundations project 0x17. C - Doubly linked lists

A doubly linked list is a complex data structure that is similar to a singly
linked list. The difference is, as the name suggests, a doubly linked list is
a list of nodes each of which has two links/pointers. One points to the previous
node in the list, while the other points to the next node. This is in contrast
to singly linked lists whose nodes only have a pointer to the next node.

Doubly linked lists enable us to go through the list both in the forward and
backward direction, and they also simplify the process of insertion. However,
that additional pointer does present an overhead.

To overcome this, we can actually use only one pointer as a way to access both
the previous node and the next node. This is done via the XOR operation. But
this topic won't be discussed further in this project.

Tasks:

0-print_dlistint.c: Prints a doubly linked list with a given head pointer. This
one is exactly similar to the implementation on a singly linked list. Just
iterate through the list with a pointer, printing the values as you go, until
the pointer becomes NULL.

1-dlistint_len.c: Returns the number of nodes of a doubly linked list. Again,
this can be done exactly the same way as singly linked lists, using the above
concept, but without printing anything.

2-add_dnodeint.c: Adds a new node at the beginning of a doubly linked list. The
pointer manipulation is the intersting part here. If the list is empty (head is
NULL), then we don't/can't modify the prev pointer of the head.

3-add_dnodeint.c: Adds a new node at the end of a doubly linked list. Again,
the tricky part is handling the pointers. If the list is empty, the head pointer
has to be changed as well, because the new node will be the head.
