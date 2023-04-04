#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *f = *head;
	unsigned int j = 0;

	if (head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; j < idx - 1 && f ; j++)
		f = f->next;

	if (!f)
	{
		free(new);
		return (NULL);
	}

	new->next = f->next;
	f->next = new;

	return (new);
}
