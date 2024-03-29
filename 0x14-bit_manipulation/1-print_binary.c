#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{

	if (n >= 1)
	{
		print_binary(n >> 1);
		if ((n & 1) == 1)
		{
			_putchar('1');
		}
		else if ((n & 1) == 0)
		{
			_putchar('0');
		}
	}
}
