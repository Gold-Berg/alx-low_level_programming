#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if value is not present or list is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	// size_t end = sqrt(size),
	size_t start, i = 1;
	listint_t *temp = list;
	if (list == NULL || size == 0)
		return NULL;
	while(list != NULL && list->next != NULL)
	{
		printf("%d-----%zu\n",  list->n, i);
		printf("%p-----%p\n",  (void*)(list), (void *)(list)->(&(next[2])));

		list = &(list)->next[0];
		i = i * 2;

	}
		return list;
	(void)temp;
	(void)size;
	// (void)end;
	(void)i;
	(void)start;
	(void)value;
}
