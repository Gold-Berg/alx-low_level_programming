#include "lists.h"
/**
 * listint_len - Returns the number of elements in listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t check = 0;

	while (h != NULL)
	{
		check++;
		h = h->next;
	}
	return (check);
}
