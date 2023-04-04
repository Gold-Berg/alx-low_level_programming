#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *x = NULL;
	listint_t *point = *head;

	while (point != NULL)
	{
		x = point->next;
		point->next = prev;
		prev = point;
		point = x;
	}
	*head = prev;
	return (*head);
}
