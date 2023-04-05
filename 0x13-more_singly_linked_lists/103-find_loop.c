#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *look = head;
	listint_t *x;

	if (head == NULL)
		return (NULL);

	x = head;

	while (x != NULL && x->next != NULL)
	{
		look = look->next;
		x = x->next->next;

		if (look == x)
		{
			look = head;

			while (look != x)
			{
				look = look->next;
				x = x->next;
			}
			return (look);
		}
	}
	return (NULL);
}
