#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *tem;

	while (current != NULL)
	{
		tem = current;
		current = current->next;
		free(tem);
	}
}
