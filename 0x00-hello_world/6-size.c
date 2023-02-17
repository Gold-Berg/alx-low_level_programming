#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: Always 0
 */

int main(void)
{
	printf("The size of a char: %ld byte(s)\n", sizeof(char));
	printf("The size of an int: %ld byte(s)\n", sizeof(int));
	printf("The size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("The size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
