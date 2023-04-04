#include "lists.h"

/**
 * listint_len - this returns the number of elements in a linked lists
 * @h: transveres linked list of type listint_t
 * Return: count of the nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
