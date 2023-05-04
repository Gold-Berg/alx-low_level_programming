#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int awns = 0;
	unsigned int point = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			awns = awns << 1;
			awns = awns + (*b - '0');
			point++;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (awns);
}
