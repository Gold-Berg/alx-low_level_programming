#include"main.h"

/**
 * print_sign - prints the sign
 * @nL: the int to check
 * Returni: 1 and prints + if greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints -if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
