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

6-pop_listint.c: The function receives a pointer to the head of a singly linked
list, and it pops the first node and returns the value (n) that was stored in
that node.

7-get_nodeint.c: The function receives the head of a singly linked list, and
an unsigned int index, and it returns the node at the given index if it exists.
The index is the offset of the node from the head (0 would mean an offset of 0
from the head, which is the head itself).

8-sum_listint.c: The function is given a pointer to the first node of a singly
linked list (its head), and it returns the sum of the n values that are stored
in the nodes of the list.

9-insert_nodeint.c: Given a pointer to the head of a singly linked list, an
index unsigned int, and an n value, the function creates a new node with the
given n value and inserts it in the list at the given index. A pointer to the
head was given because if the given index is zero, the function inserts the
new node at the beginning, and so the head that the caller function is using
must be altered to point to the new node.

10-delete_nodeint.c: Given a pointer to the head of a singly linked list, and
an index, the function deletes (de-attachs and frees) the node at that index
of the linked list if it exists. Again, a pointer to the head is given because,
if the function receives an index of 0, it removes the node that is pointed to
by the head, and so the head that is used by the caller function has to be
altered to point to the new first node (previously second).

100-reverse_listint.c: The function accepts a pointer to the head of a singly
linked list and reverses the list. The function uses only two variables and
one loop.
