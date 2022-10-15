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

	i = 0;
	while (i <= 10)
	{
		putchar(i + '0');
		i++;
	}

	c = 'a';
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
