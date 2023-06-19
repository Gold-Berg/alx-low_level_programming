#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t linked list.
* @h: Pointer to a pointer to the head of the doubly linked list.
* @idx: Index where the new node should be inserted.
* @n: Value to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
if (h == NULL)
return (NULL);

dlistint_t *new_node, *current = *h;
unsigned int i;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return( new_node);
}

for (i = 0; current != NULL && i < idx - 1; i++)
{
current = current->next;
}

if (current == NULL)
return (NULL);

new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
