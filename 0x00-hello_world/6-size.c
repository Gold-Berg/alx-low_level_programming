#include <stdio.h>

/**
 *main - this is a main function
 *
 * Return: Always 0
 */

int main(void)
{
	printf("The size of char is %ld bytes.\n",  sizeof(char));
	printf("The size of int is %ld bytes.\n",  sizeof(int));
	printf("The size of long int is %ld bytes.\n",  sizeof(long int));
	printf("The size of long long int is %ld bytes.\n",  sizeof(long long int));
	printf("The size of float is %ld bytes.\n",  sizeof(float));
	return (0);
}

