#include <stdio.h>
/**
  * main - entry point
  * description: print all numbers of base 16 in lower case
  * Return: always 0
  */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
