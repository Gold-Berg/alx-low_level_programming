#include"main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: letter to be checked
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

