#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %llf bytes(s)\n", sizeof(longlong));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
