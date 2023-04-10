#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int point;
	unsigned long int point1 = (n & 1);
	unsigned long int point2 = (m & 1);

	if (n == 0 && m == 0)
	{
		return (0);
	}
	point = (point1 != point2);

	point = (point1 != point2);
	return (point + (flip_bits(n >> 1, m >> 1)));
}
