#include <stdio.h>
/**
  * main - entry point
  * description: print all single digit numbers of base 10
  * Return: always 0
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%i", n);
	}
	putchar('\n');

	return (0);
}
