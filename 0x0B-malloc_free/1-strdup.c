#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: THe string to copy
 * Return: The pointer
 */
char *_strdup(char *str)
{
char *cpy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	cpy = malloc(sizeof(char) * (i + 1));
	if (cpy == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		cpy[j] = str[j];
	return (cpy);
}
