#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;
	while (*i)
	{
		i++;
	}

	while (*src)
	{
		*i++ = *src++;
	}
	*i = '\0';
	return (dest);
}
