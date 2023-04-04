#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fail
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last = malloc(sizeof(listint_t));

last->n = n;
last->next = NULL;
if (*head == NULL)
{
*head = last;
}
else
{
listint_t *c = *head;
while (c->next != NULL)
{
c = c->next;
}
c->next = last;
}
return (last);
}
