<h1>Singly Linked Lists</h1>
This directory was created on Nov 16, 2023 to hold my answers/submissions for
the project '0x12. C - Singly linked lists' of ALX SE Foundations.

A singly linked list is one of the most commonly used data structures.

<h2>Data Structures</h2>
Data structures is a way of storing, organizing, and manipulating data that
makes it easier to insert, access, delete, or modify the stored data. There
are numerous data structures available, and the choice of which to use largely
on the type and frequency of operations to be performed on the structure.

Data structures can be classified into two catagories based on how the data is
organized.
1. Linear Data Structures: The data is organized sequentially or linearly. This
means that each data item in the structure is linked to the previous and the
next element. This also means that we can traverse all the elements in the
structure in one run. Linear data structures are further catagorized into two
sub-groups based on the memory allocation.
	   a. Static Data Structures: The size is fixed in compilation. Once
	   the size of the structure has been assigned, we can't alter it.
	   While this makes them less flexible, it makes accessing the elements
	   easier and faster.
	   Arrays are the best example for this type.

	   b. Dynamic Data Structures: The size of the structure can be modified
	   at runtime. Thus, we don't have to guess the size that we are going
	   to need. We can grow and shrink the structure if needed, making the
	   memory usage (space complexity) efficient.
	   Examples of dynamic data structures are linked lists, stacks, and
	   queues.

2. Non-Linear Data Structures: The data elements are not stored sequentially, or
linearly. Examples of this type of structure are trees which have a hierarchical
structure or graphs whixch has a network model.

<h2>Linked Lists</h2>
Linked lists are data structures that store elements in non-contiguous locations
in memory. Each element in the list (also called a node) consists of value, and
a pointer/s. Nodes in singly linked lists contain one pointer, holding the
address of the next node, while those in doubly linked lists have two pointers,
one pointing to the previous node, and the other pointing to the next node in
the list.

<h2>Files</h2>

0-print_list.c: Given a pointer to a singly linked list (or simply its head),
the function prints the contents of each node in the list and returns the
number of nodes of the list. It prints the contents in a specified format
"[len] str", where len and str are the contents (besides the next pointer) of
each node.

1-list_len.c: Given the head of a singly linked list, the function returns the
length (number of nodes) of the list. It basically does the same as the above
function minus the printing part.
