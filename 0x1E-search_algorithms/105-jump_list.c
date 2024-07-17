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
    size_t step, prev_index;
    listint_t *current, *prev;

    if (!list || size == 0)
        return (NULL);

    step = sqrt(size);
    prev = current = list;

    while (current->index < size && current->n < value)
    {
        prev = current;
        for (prev_index = 0; current->next && prev_index < step; prev_index++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (current->n >= value)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
