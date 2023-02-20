#include <stdio.h>

/**
 * main - main function
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i ; j < 100; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (i > j)
			{
				continue;
			}
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i + j != 197)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
