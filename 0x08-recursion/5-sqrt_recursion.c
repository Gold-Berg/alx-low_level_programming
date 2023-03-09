#include "main.h"
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns square root
 * @n: number
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
/**
 * _sqrt - calculate square root
 * @n: number
 * @i: iterate number
 *
 * Return: The square root
 */
{
	int sqrt + i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
