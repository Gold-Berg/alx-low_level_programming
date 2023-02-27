#include"main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: The integer to be swapped
 * @b: The  integer to be swapped with
 * Return: nothing
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
