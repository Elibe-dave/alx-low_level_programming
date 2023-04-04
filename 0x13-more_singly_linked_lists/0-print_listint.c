#include "lists.h"

/**
 * print_listint - this will print all the elements of a linked list
 * @h: this is the linked list of type listint_t to print
 * Return: count of the nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
