#include"main.h"
/**
 * print_square - prints a square
 * @size: size is the size of the square
 *
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
