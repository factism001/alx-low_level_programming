#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(unsigned char));
	printf("Size of an int: %i byte(s)\n", sizeof(unsigned int));
	printf("Size of a long int: %li byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %llf bytes(s)\n", sizeof(unsigned long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(unsigned float));
	return (0);
}
