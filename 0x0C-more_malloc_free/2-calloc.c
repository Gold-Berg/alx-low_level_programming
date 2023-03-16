#include "main.h"
#include <stdlib.h>
/**
 * *_memset - allocate memory with constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	_memset(i, 0, nmemb * size);
	return (i);

}

