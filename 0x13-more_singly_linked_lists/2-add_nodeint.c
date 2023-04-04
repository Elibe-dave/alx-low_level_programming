#include "lists.h"
/**
 * add_nodeint - a new node is added by this at the beginning of a linked list
 * @head: in the list, thiss is the pointer to the first node
 * @n: this is data that will be inserted into the new node
 * Return: this returns NULL if it fails, else returns pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}
