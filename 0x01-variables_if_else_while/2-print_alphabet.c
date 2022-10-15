#include <stdio.h>
/**
* main - Entry point
* Description: Use `putchar` function to print the alphabet in lowercase.
* Return: Always 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
