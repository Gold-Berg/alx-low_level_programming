#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte
 * The _memset() function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 *
 * @s: output and the return
 * @b: the this is the input string
 * @n: the number of bytes
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mark;

	for (mark = 0; mark < n; mark++)
	{
		s[mark] = b;
	}
	return (s);
}
