#include <stdio.h>

/**
 * main - main function
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j || i != j || j != k || i < j || j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != j && i != k && j != k)
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}

	putchar('\n');
	return (0);
}
