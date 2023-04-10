#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index  > size)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}


	return (get_bit(n >> 1, index - 1));
}
