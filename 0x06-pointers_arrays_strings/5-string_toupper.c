#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a
 *
 * @x: the input string
 *
 * Return: x
 */
char *string_toupper(char *x)
{
	int i = 0;
	int j = 'a' - 'A';

	for (i = 0; x[i] != '\0'; ++i)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - j;
		}
	}
	return (x);
}
