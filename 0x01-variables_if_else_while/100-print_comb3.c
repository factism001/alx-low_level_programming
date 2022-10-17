#include <stdio.h>
/**
* main - entry point
* description: possible different combinations of two digits
* Return: Always 0
*/
int main(void)
{
	int first, second;

	first = 48;
	second = 48;

	while (first < 58)
	{
		putchar(first + '0');
		second++;
	} while (second < 58)
	{
		putchar(second + '0');
		first++;
	}
	if (first < 58 && second < 58)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
