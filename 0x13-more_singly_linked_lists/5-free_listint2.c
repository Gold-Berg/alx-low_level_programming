#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets head to NULL
 * @head: Pointer to a pointer pointing to the head node of a listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *last;
	if (head == NULL || *head == NULL)
	return;


	while (*head != NULL)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
	}
	*head = NULL;
}
