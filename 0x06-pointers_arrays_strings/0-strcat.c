#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
