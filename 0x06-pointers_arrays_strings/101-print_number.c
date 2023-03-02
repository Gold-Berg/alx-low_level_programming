#include "main.h"
void print_number(int n)
{
    int divisor = 1;

    if (n < 0) {
        putchar('-');
        n *= -1;
    }

    while (n / divisor >= 10)
        divisor *= 10;

    while (divisor != 0) {
        putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }
}

