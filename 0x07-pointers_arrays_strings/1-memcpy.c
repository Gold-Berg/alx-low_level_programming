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

	for (mark = 0; mark < n; mark++)
		dest[mark] = src[mark];
	return (dest);
}
