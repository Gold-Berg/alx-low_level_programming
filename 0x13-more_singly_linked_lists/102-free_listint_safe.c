#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *point = *h;
	listint_t *f;

	if (h == NULL || *h == NULL)
		return (num);
	while (point != NULL)
	{
		num++;
		f = point;
		point = point->next;
		free(f);
		if (f <= point)
			break;
	}
	*h = NULL;
	return (num);
}
