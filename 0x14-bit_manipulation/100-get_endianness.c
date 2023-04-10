#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int ed = 1;
char *x = (char *)&ed;

if (*x)
return (1);
else
return (0);
}
