#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *f;
	size_t num = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num++;
		f = head;
		head = head->next;

		if (f <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (num);
}
