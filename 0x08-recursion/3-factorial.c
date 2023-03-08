#include "main.h"

/**
 * factorial - Returns factorial of given number
 * @n: The given number
 * Return: Nothing
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
