#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: The output string
 * @src: The input string
 * @n: Number of bytes to copy
 * Return: The string copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mark;
	char *pdest = dest;
	char const *psrc = src;

	for (mark = 0; mark < n; mark++)
	{
		*pdest = *psrc++;
	}
	return (dest);
}
