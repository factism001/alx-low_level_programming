#include <stdio.h>
/**
  * main - Entry point
  * description: print alphabet in lowercase then uppercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	c = 'a'
	while (c <= 'z')
	{
		putchar(c);
		c++
	}

	c = 'A'
	while (c <= 'Z')
	{
		putchar(c);
		c++
	}
	putchar('\n');

	return (0);
}
