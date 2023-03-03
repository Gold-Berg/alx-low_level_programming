#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: a pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k,  carry, n1_len, n2_len, sum;

for (n1_len = 0; n1[n1_len] != '\0'; n1_len++)
;
for (n2_len = 0; n2[n2_len] != '\0'; n2_len++)
;
for (k = 0; k < size_r - 1; k++)

i = n1_len - 1;
j = n2_len - 1;
carry = 0;

sum = carry;
for (k = 0; k < size_r -1; k++)
{
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';
if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
carry = 0;
r[k] = sum + '0';
if (i < 0 && j < 0 && carry == 0)
break;
}

r[size_r - 1] = '\0';

if (carry != 0 || (i >= 0 || j >= 0))
return (0);

for (i = 0, j = size_r - 2; i < j; i++, j--)
{
char temp = r[i];

r[i] = r[j];
r[j] = temp;
}

return (r);
}

