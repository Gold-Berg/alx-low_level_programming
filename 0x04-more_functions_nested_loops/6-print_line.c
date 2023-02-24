#include"main.h"
/**
 * print_line - draws a straight line
 * @n: the number of times the character _ should be printed
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
