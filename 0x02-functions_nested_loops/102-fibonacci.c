#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
int i, n = 50;

unsigned long long fib1 = 1, fib2 = 2, fib3;

printf("%llu, %llu", fib1, fib2);

for (i = 3; i <= n; i++)
{
fib3 = fib1 + fib2;
printf(", %llu", fib3);
fib1 = fib2;
fib2 = fib3;
}

printf("\n");

return (0);
}
