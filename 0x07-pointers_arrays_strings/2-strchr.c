#include "main.h"
/**
 * _strchr -  a function that locates a character in a string.
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int find;

	for (find = 0; s[find] >= '\0'; find++)
	{
		if (s[find] == c)
			return (s  + find);
	}
	return (NULL);
}
