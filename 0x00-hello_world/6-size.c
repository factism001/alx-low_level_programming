#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %2d byte(s)\n", sizeof(c));
	printf("Size of an int: %2d byte(s)\n", sizeof(i));
	printf("Size of a long int: %2d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %2d bytes(s)\n", sizeof(lli));
	printf("Size of a float: %2d byte(s)\n", sizeof(f));

	return (0);
}
