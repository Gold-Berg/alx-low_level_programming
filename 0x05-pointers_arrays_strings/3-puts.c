#include "main.h"
/**
 * _puts - prints a string
 * @str: The string to print
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
