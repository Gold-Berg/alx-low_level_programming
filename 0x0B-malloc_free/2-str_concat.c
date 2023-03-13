#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{

	char *plus;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	plus = malloc(sizeof(char) * (i + j + 1));
	if (plus == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		plus[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		plus[i] = s2[j];
		i++, j++;

	}
	plus[i] = '\0';
	return (plus);
}
