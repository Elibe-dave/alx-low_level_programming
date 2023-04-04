0x13. C - More singly linked lists

#DESCRIPTION/LEARNING OBJECTIVES
At the end of this project, you are expected to be able to:
0. Learn how to use linked lists
1. Learn how to look for the right source of information without too much help.

#GENERAL REQUIREMENTS
0. Allowed editors: vi, vim, emacs
1. All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu8
2. Codes will use the Betty style. It will be checked using betty-style.pl and betty-doc.p
3. Global Variables are not allowed.
4. No more than 5 functions per file.
5. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
6. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.
7. All files to be create in the current directory (0x13-more_singly_linked_lists), GitHub repository: alx-low_level_programming.

#TASKS
0. PRINT LIST (0-print_listint.c)
A function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Use of printf is allowed

1. LIST LENGTH (1-listint_len.c)
A function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h)

2. ADD NODE (2-add_nodeint.c)
A function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed.

3. ADD NODE AT THE END (3-add_nodeint_end.c)
A function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed.

4. FREE LIST (4-free_listint.c)
A function that frees a listint_t list.

Prototype: void free_listint(listint_t *head)

