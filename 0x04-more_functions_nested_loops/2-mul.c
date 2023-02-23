#include"main.h"
/**
 * mul - multiply numbers
 * @a: to be multiplied by b
 * @b: to be multiplied by a
 * Return: t
 */

int mul(int a, int b)
{
int result = 0;
int sign = 1;

if (a < 0)
{
a = -a;
sign = -sign;
}
if (b < 0)
{
b = -b;
sign = -sign;
}

while (b > 0)
{
if (b & 1)
{
result += a;
}
a <<= 1;
b >>= 1;
}

return (sign *result);
}
