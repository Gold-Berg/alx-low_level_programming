#include "main.h"
int check_prime(int n, int i);

/**
 * is_prime_number - returns prime number
 * @n: number
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks if a number is prime
 * @n: The number to be checked
 * @i: iteration times
 * Return: 1 if prime, 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
