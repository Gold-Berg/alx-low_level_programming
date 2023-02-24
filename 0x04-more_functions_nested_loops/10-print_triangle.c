#include"main.h"
/**
 * print_triangle - prints triangle
 * @size: triangle size
 *
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}}
