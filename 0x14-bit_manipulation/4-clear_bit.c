#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int point;

	if (index > size)
	{
		return (-1);
	}
	point = 1 << index;
	*n = *n & ~point;

	return (1);
}
