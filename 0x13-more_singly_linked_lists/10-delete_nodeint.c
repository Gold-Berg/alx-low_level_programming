#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *point = *head;
	listint_t *prev;

	if (point == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = point->next;
		free(point);
		return (1);
	}
	while (index > 0 && point != NULL)
	{
		prev = point;
		point = point->next;
		index--;
	}
	if (point == NULL)
	{
		return (-1);
	}
	prev->next = point->next;
	free(point);
	return (1);
}
