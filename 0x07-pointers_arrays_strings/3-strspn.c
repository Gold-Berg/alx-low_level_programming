#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: number of accepted bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, y, check;

for (i = 0; *(s + i) != '\0'; i++)
{
check = 1;
for (y = 0; *(accept + y) != '\0'; y++)
{
if (*(s + i) == *(accept + y))
{
check = 0;
break;
}
}
if (check == 1)
break;
}
return (i);
}
