#include <stdio.h>
/**
  * main - Entry point
  * description: print all single base 10 numbers with putchar
  * Return: always 0
  */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');

	return (0);
}
