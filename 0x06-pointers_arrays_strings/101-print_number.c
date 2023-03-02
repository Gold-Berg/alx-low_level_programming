#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer to print
 */
void print_number(int n)
{
	unsigned int real;

	if (n < 0)
	{
		_putchar('-');
		real = -n;

	}
	else
	{
		real = n;
	}
	if (real / 10)
	{
		print_number(real / 10);
	}
	_putchar((real % 10) + '0');
}
