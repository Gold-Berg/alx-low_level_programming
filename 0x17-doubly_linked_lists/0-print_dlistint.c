#include "lists.h"
/**
 * print_dlistint - prints element in a linked list
 * @h: head
 * Return: const
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *point = h;

	while (point != NULL)
	{
		printf("%d\n", point->n);
		count++;
		point = point->next;
	}

	return (count);
}
