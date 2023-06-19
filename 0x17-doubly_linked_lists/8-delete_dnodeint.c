/**
* delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t linked list.
* @head: Pointer to a pointer to the head of the doubly linked list.
* @index: Index of the node to be deleted.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return (-1);

dlistint_t *current = *head;
unsigned int i;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}

if (current == NULL)
return (-1);

current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);

return (1);
}
